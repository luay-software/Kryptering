#include <stdio.h>
#include <string.h>

int main(void) {
    int key;
    char text[10];
    char crypt_text[10];

    printf("Enter the text you wish to encrypt: \n");
    scanf("%s", text);
    printf("Enter the key: \n");
    scanf("%d", &key);
    printf("Text: %s, key: %d\n", text, key);

    for (size_t i = 0; i < strlen(text); i++)
    {
        crypt_text[i] = text[i] + key; 
    }
    
    printf("%s\n", crypt_text);
    printf("%d\n", strlen(text));

    return 0;
}