#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int avg = (image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3;
            image[i][j].rgbtBlue = avg;
            image[i][j].rgbtGreen = avg;
            image[i][j].rgbtRed = avg;
        }
    }
    return;
}
// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            BYTE originalBlue = image[i][j].rgbtBlue;
            BYTE originalGreen = image[i][j].rgbtGreen;
            BYTE originalRed = image[i][j].rgbtRed;

            int sepiaBlue = round(0.272 * originalRed + 0.534 * originalGreen + 0.131 * originalBlue);
            int sepiaGreen = round(0.349 * originalRed + 0.686 * originalGreen + 0.168 * originalBlue);
            int sepiaRed = round(0.393 * originalRed + 0.769 * originalGreen + 0.189 * originalBlue);

            image[i][j].rgbtBlue = (sepiaBlue > 255) ? 255 : (BYTE)sepiaBlue;
            image[i][j].rgbtGreen = (sepiaGreen > 255) ? 255 : (BYTE)sepiaGreen;
            image[i][j].rgbtRed = (sepiaRed > 255) ? 255 : (BYTE)sepiaRed;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width / 2; j++)
        {
            int swap_index = width - 1 - j;
            RGBTRIPLE temp = image[i][j];
            image[i][j] = image[i][swap_index];
            image[i][swap_index] = temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    for (int i = 1; i < height - 1; i++)
    {
        for (int j = 1; j < width - 1; j++)
        {
            int sumRed = 0; 
            int sumGreen = 0; 
            int sumBlue = 0;
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    sumRed += image[i + di][j + dj].rgbtRed;
                    sumGreen += image[i + di][j + dj].rgbtGreen;
                    sumBlue += image[i + di][j + dj].rgbtBlue;
                }
            }
            temp[i][j].rgbtRed = sumRed / 9;
            temp[i][j].rgbtGreen = sumGreen / 9;
            temp[i][j].rgbtBlue = sumBlue / 9;
        }
    }
    for (int i = 1; i < height - 1; i++) {
        for (int j = 1; j < width - 1; j++) {
            image[i][j] = temp[i][j];
        }
    }
    return;
}
