#include <stdio.h>
#include <gd.h>

#define WIDTH 600
#define HEIGHT 400
#define BLACK 0x000000  // Black color
#define RED 0xFF0000    // Red color
#define GOLD 0xFFD100   // Gold/Yellow color

void drawGermanyFlag() {
    gdImagePtr im;
    FILE *output;

    im = gdImageCreateTrueColor(WIDTH, HEIGHT);
    output = fopen("germany_flag.png", "wb");

    // Allocate black, red, and gold colors
    int blackIndex = gdImageColorAllocate(im, (BLACK >> 16) & 0xFF, (BLACK >> 8) & 0xFF, BLACK & 0xFF);
    int redIndex = gdImageColorAllocate(im, (RED >> 16) & 0xFF, (RED >> 8) & 0xFF, RED & 0xFF);
    int goldIndex = gdImageColorAllocate(im, (GOLD >> 16) & 0xFF, (GOLD >> 8) & 0xFF, GOLD & 0xFF);

    // Draw black top third
    gdImageFilledRectangle(im, 0, 0, WIDTH - 1, HEIGHT / 3 - 1, blackIndex);

    // Draw red middle third
    gdImageFilledRectangle(im, 0, HEIGHT / 3, WIDTH - 1, 2 * HEIGHT / 3 - 1, redIndex);

    // Draw gold bottom third
    gdImageFilledRectangle(im, 0, 2 * HEIGHT / 3, WIDTH - 1, HEIGHT - 1, goldIndex);

    // Save the image
    gdImagePng(im, output);
    fclose(output);
    gdImageDestroy(im);
}

int main() {
    drawGermanyFlag();
    return 0;
}