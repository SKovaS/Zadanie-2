#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>


int main(int argc,string argv[])
{
    int key=0;;
    int length;
    string text="";
    
    if(argc!=2)
    {
        printf("2 should be a command-line argument\n");                                                               
        return 1;
    }
    else if (atoi(argv[1]) < 0)
    {
     printf("The program works correctly. Enter a non-negative integer.");
     return 1;
    }
    else
       {
          printf("plaintext: ");
          key=atoi(argv[1]);
          text=get_string();
          length=strlen(text);
      
            printf("ciphertext: ");
             for(int i = 0; i < length; i++)
             {
                 if(isalpha(text[i]))
                 {
            
                   if(islower(text[i]))
                   {
                    printf("%c", ((((text[i] - 97)+key)%26)+97));
                   }
                    else
                   {
                    printf("%c" , ((((text[i] - 65)+key)%26)+65));
                   }
                 }
                 else
                 {
                 printf("%c", text[i]);
                 }   
             }
    
        printf("\n");
    return 0;
     }

}
