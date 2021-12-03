#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int a=0; a<height; a++)
    {
        for(int b=0; b<width; b++)
        {
            RGBTRIPLE pixel = image[a][b];
            int average = round((pixel.rgbtRed + pixel.rgbtBlue + pixel.rgbtGreen)/3.0);
            image[a][b].rgbtRed = image[a][b].rgbtBlue = image[a][b].rgbtGreen = average; 
        }
    }
    return;
}
int max(int value)
{
    if(value > 255)
    {
        value = 255;
    }
    return value;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int a=0; a<height; a++)
    {
        for(int b=0; b<width; b++)
        {
            RGBTRIPLE pixel = image[a][b];
            image[a][b].rgbtRed = max(round(0.393 * pixel.rgbtRed + 0.769 * pixel.rgbtGreen + 0.189 * pixel.rgbtBlue));
            image[a][b].rgbtGreen = max(round(0.349 * pixel.rgbtRed + 0.686 * pixel.rgbtGreen + 0.168 * pixel.rgbtBlue));
            image[a][b].rgbtBlue = max(round(0.272 * pixel.rgbtRed + 0.534 * pixel.rgbtGreen + 0.131 * pixel.rgbtBlue));
        }
    }
    return;
}
// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int a=0; a<height; a++)
    {
        for(int b=0; b<width/2; b++)
        {
            RGBTRIPLE temp = image[a][b];
            image[a][b] = image[a][width - b - 1];
            image[a][width - b - 1] =  temp;
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
  /*  for(int a=0; a<height; a++)
    {
        for(int b=0; b<width; b++)
        {
            RGBTRIPLE pixel = image[a][b];
            pixel = (image[a-1][b-1]+image[a-1][b]+image[a-1][b+1]+image[a][b-1]+image[a][b]+image[a][b+1]+image[a+1][b-1]+image[a+1][b]+image[a+1][b+1])/9;
        }
    }*/
            return;
}
