#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"

#include "libraries/pico_camera/pico_camera.hpp"

using namespace pimoroni;

PicoCamera camera;

int main() {
    stdio_init_all();

    camera.init();

    gpio_init(camera.SW_A);
    gpio_set_dir(camera.SW_A, GPIO_IN);
    gpio_pull_up(camera.SW_A);

    // Press the button to take a picture!
    while (1) {
        while (gpio_get(camera.SW_A));

        camera.capture_image(0);
        printf("Image capture complete\n");

        // Use the top 2 bits of the green channel to draw some approximate
        // ASCII art of the image.  This is good enough to check things are basically working.
        for (int y = 0; y < 40; ++y) {
            for (int x = 0; x < 80; ++x) {
                int addr = y * 1600 * 2 * 30 + x * 20 * 2;
                uint32_t data;
                camera.read_data(0, addr, 4, &data);

                uint32_t g = (data >> 5) & 0x3f;
                g >>= 4;
                char c;
                switch (g) {
                    case 1: c = '.'; break;
                    case 2: c = 'x'; break;
                    case 3: c = 'X'; break;
                    default: c = ' '; break;
                }

                printf("%c", c);
            }
            printf("\n");
        }
    }

    return 0;
}
