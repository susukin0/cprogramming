#include <stdio.h>
int main(){

char ch;

printf("enter a character:");
scanf("%c", &ch);


if(ch >= 'A' && ch <= 'Z'){
	printf("your character  is uppercase.");

	}
else if(ch >= 'a' && ch  <= 'z'){
	printf("your character is lowercase.");

	}
else{
	printf("your character  is not an alphabet");

	}

return 0;

}

