#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encipher(string text, int k);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        for (int i = 0, length = strlen(argv[1]); i < length; i++)
        {
            if (!(isdigit(argv[1][i])))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        int key = atoi(argv[1]);
        string plainText = get_string("plaintext: ");
        encipher(plainText, key);
        return 0;
    }
    printf("Usage: ./caesar key\n");
    return 1;
}

void encipher(string text, int k)
{
    char cipherText[strlen(text)];
    for (int j = 0, length = strlen(text); j < length; j++)
    {
        if (isalpha(text[j]))
        {
            if (isupper(text[j]))
            {
                cipherText[j] = 'A' + (text[j] - 'A' + k) % 26;
            }
            else
            {
                cipherText[j] = 'a' + (text[j] - 'a' + k) % 26;
            }
        }
        else
        {
            cipherText[j] = text[j];
        }
    }
    printf("ciphertext: %s\n", cipherText);
}
