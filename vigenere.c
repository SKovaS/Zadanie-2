#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    string key = argv[1];
    int key_length=0;
    int text_length=0;
    int b = 0;
    if(argc != 2)
    {
        printf("2 should be a command-line argument\n");
        return 1;
    }
    key_length=strlen(key); 
    for(int i = 0; i < key_length; i++)
    {
        if(!isalpha(key[i]))
        {
            printf("The key is to be with alphabet");
            return 1;
        }
    }
     printf("plaintext: ");
     string plaintext = get_string();
     printf("ciphertext: ");
     text_length=strlen(plaintext);
    for(int i = 0; i<text_length; i++)
    {
        if(isalpha(plaintext[i]))
        {
            int j = b % strlen(key);
            
            if(islower(plaintext[i]))
            {
                if(islower(key[j]))
                {
                    printf("%c", ((plaintext[i]-97+key[j]-97)%26)+97); 
                }
                else
                {
                    printf("%c", ((plaintext[i]-97+key[j]-65)%26)+97);
                }
            }
            if(isupper(plaintext[i]))
            {
                if(islower(key[j]))
                {
                    printf("%c", ((plaintext[i]-65+key[j]-97)%26)+65);
                }
                else
                {
                    printf("%c", ((plaintext[i]-65+key[j]-65)%26)+65);
                }  
            }
        b++;
        }
        else
        {
            printf("%c", plaintext[i]);
        }
       
    }
    printf("\n");
    return 0;
}   
