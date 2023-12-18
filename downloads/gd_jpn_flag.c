#include <stdio.h>
#include <gd.h>
#include <math.h>

void draw_japan_flag(gdImagePtr img);

int main() {
    int width = 1200;
    int height = 800;

    gdImagePtr img = gdImageCreateTrueColor(width, height);
    gdImageAlphaBlending(img, 0);

    draw_japan_flag(img);

    FILE *outputFile = fopen("./../images/japan_flag.png", "wb");
    if (outputFile == NULL) {
        fprintf(stderr, "Error opening the output file.\n");
        return 1;
    }

    gdImagePngEx(img, outputFile, 9);
    fclose(outputFile);
    gdImageDestroy(img);

    return 0;
}

void draw_japan_flag(gdImagePtr img) {
    int width = gdImageSX(img);
    int height = gdImageSY(img);
    int red, white;

    // 日本國旗的顏色
    red = gdImageColorAllocate(img, 255, 0, 0); // 紅色
    white = gdImageColorAllocate(img, 255, 255, 255); // 白色

    // 繪製白色背景
    gdImageFilledRectangle(img, 0, 0, width, height, white);

    // 計算圓心座標和半徑
    int circle_center_x = width / 2;
    int circle_center_y = height / 2;
    int circle_radius = height / 4; 

    // 繪製紅色圓圈
    gdImageFilledEllipse(img, circle_center_x, circle_center_y, circle_radius * 2, circle_radius * 2, red);
}