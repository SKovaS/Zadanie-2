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
    
    if(argc!=2)////Проверяем количество аргументов. Если аргументов меньше двух или больше возвращаем.
    {
        printf("2 should be a command-line argument\n");                                                               
        return 1;
    }
    else if (atoi(argv[1]) < 0)//Проверяем аргумент "argv[1]".Если он меньше 0 возвращаем(так как он и будет нашим ключом).
    {
     printf("The program works correctly. Enter a non-negative integer.");
     return 1;
    }
    else
       {
          printf("plaintext: ");
          key=atoi(argv[1]);//Наш ключ.
          text=get_string();//Вводим нашу строку с клавиатуры.
          length=strlen(text);//Размер строки.
      
            printf("ciphertext: ");
             for(int i = 0; i < length; i++)
             {
                 if(isalpha(text[i]))//Проверяем буква ли символ.
                 {
            
                   if(islower(text[i]))// Проверяем строчная буква или нет.
                   {
                    printf("%c", ((((text[i] - 97)+key)%26)+97));//Если буква строчная.
                   }
                    else
                   {
                    printf("%c" , ((((text[i] - 65)+key)%26)+65));//Если буква заглавная.
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
