#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char sub;
int n;

int main(int len, string key[])
{
    
    if (len != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        n = atol(key[1]);
    }
    if (n <= 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int a = 0, q = strlen(key[1]); a < q; a++)
    {
        string string1 = key[1];
        if (isdigit(string1[a]))
        {}
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
      
    string ptxt = get_string("plaintext: ");
    int l = strlen(ptxt);
    
    char ctxt[l];
    char cipher;
    
    printf("ciphertext: ");
    for (int i = 0; i < l; i++)
    {
        if (isalpha(ptxt[i]))
        {
            if (isupper(ptxt[i]))
            {
                sub = 'A';
            }
            else
            {
                sub = 'a'; 
            }
            cipher = (ptxt[i] - sub + n) % 26 + sub;
            printf("%c", cipher);
        }
        else
        {
            printf("%c", ptxt[i]);
        }
    }
    printf("\n");
}
