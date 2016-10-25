#include "stdio.h"
#include "cs50.h"
#include "string.h"
#include <ctype.h>

int main (int argc, string argv[])
{
	string input = "";
	int length = 0;
	
	input = get_string();//Вводим строку с клавиатуры.
	length = strlen(input);//Длина строки.
	if(input[0]!=32){//Если первый символ строки не пробел.
	printf("%c",toupper(input[0]));//Выводим символ и переводим в заглавный если он строчный. 
	}
	for(int i = 0; i <length; i++)
	{
		if((input[i-1] == 32)&&(input[i]!=32)) {//Проверяем следующий символ после пробела.
			printf("%c",toupper(input[i]));//Выводим и переводим в заглавный следующий символ после пробела. 
		
		}
	}
	printf("\n");
}

