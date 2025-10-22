#include <stdio.h>
#include <string.h>

int main(void) 
{
    int input, key;
    char text[50];
    char crypt_text[50];

    printf("Press 1 if you wish to encrypt a text\n");
    printf("Press 2 if you wish to decrypt an encrypted text\n");
    scanf("%d", &input);

    if (input == 1) 
    {
        printf("Enter the text you wish to encrypt: \n");
        scanf(" %[^\n]s",&text);
        printf("Enter the key: \n");
        scanf("%d", &key);
        printf("Text: %s, key: %d\n", text, key);

        int i = 0;
        for (i; i < strlen(text); i++)
        {
            crypt_text[i] = text[i] + key; 
        }
        crypt_text[i] = '\0';

        printf("Encrypted text: %s\n", crypt_text);
    } else if (input == 2) 
    {
        printf("Enter the text you wish to decrypt: \n");
        scanf(" %[^\n]s",&text);
        printf("Enter the key: \n");
        scanf("%d", &key);
        printf("Text: %s, key: %d\n", text, key);

        int i = 0;
        for (i; i < strlen(text); i++)
        {
            crypt_text[i] = text[i] - key; 
        }
        crypt_text[i] = '\0';

        printf("Decrypted text: %s\n", crypt_text);
    } else
    {
        printf("Try again\n");
    }
    
    return 0;
}