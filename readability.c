#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int ltrs;
int sent;
int word;

int main(void)
{
    string txt = get_string("Text: ");
    int n = strlen(txt);
    for (int i = 0; i < n; i++)
    {
        txt[i] = tolower(txt[i]);
        if (txt[i] >= 'a' && txt[i] <= 'z')
        {
            ltrs++;
        }

        else if (txt[i] == ' ')
        {
            word++;
        }

        else if (txt[i] == '.' || txt[i] == '!' || txt[i] == '?')
        {
            sent++;
        }
    }
    word += 1;
    float L;
    float S;
    L = ((float)ltrs / (float)word) * 100;
    S = ((float)sent / (float)word) * 100;
    float index;
    index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);
  
    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade <= 1)
    {
        printf("Before Grade 1\n");
    }
    else 
    {
        printf("Grade %i\n", grade);
    }
}
