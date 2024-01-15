#include <stdio.h>
#include <gd.h>

int main() {
    int width = 900; // Canvas width
    int height = 600; // Canvas height

    gdImagePtr img = gdImageCreateTrueColor(width, height);

    // Define colors for the French flag
    int blue = gdImageColorAllocate(img, 0, 35, 149);  // RGB color code
    int white = gdImageColorAllocate(img, 255, 255, 255);
    int red = gdImageColorAllocate(img, 239, 65, 53);

    // Fill the French flag
    gdImageFilledRectangle(img, 0, 0, width / 3, height, blue);
    gdImageFilledRectangle(img, width / 3, 0, 2 * width / 3, height, white);
    gdImageFilledRectangle(img, 2 * width / 3, 0, width, height, red);

    // Save the image
    FILE *outfile;
    outfile = fopen("french_flag.png", "wb");
    gdImagePng(img, outfile);
    fclose(outfile);

    // Free memory
    gdImageDestroy(img);

    return 0;
}