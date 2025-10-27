#include <stdio.h>
#include <string.h> // for use of the strlen() fucntion

int main(void) 
{
    int input, key;
    char text[50]; // text entered by user
    char crypt_text[50]; // result of the encryption or decryption is stored in this string

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

        int text_length = strlen(text); // length of the text entered by the user
        int i = 0;
        for (i; i < text_length; i++)
        {
            crypt_text[i] = text[i] + key; // shifts each character of the string a ceartin amount up in ASCII
        }
        crypt_text[i] = '\0'; // null character that marks the end of a string

        printf("Encrypted text: %s\n", crypt_text);
    } else if (input == 2) 
    {
        printf("Enter the text you wish to decrypt: \n");
        scanf(" %[^\n]s",&text);
        printf("Enter the key: \n");
        scanf("%d", &key);
        printf("Text: %s, key: %d\n", text, key);

        int text_length = strlen(text); // length of the text entered by the user
        int i = 0;
        for (i; i < text_length; i++)
        {
            crypt_text[i] = text[i] - key; // shifts each character of the string a ceartin amount down in ASCII
        }
        crypt_text[i] = '\0'; // null character that marks the end of a string

        printf("Decrypted text: %s\n", crypt_text);
    } else
    {
        printf("Try again\n"); // if neither input from the user is 1 or 2, the program will exit with this message
    }
    
    return 0;
}