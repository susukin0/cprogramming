#include <stdio.h>
int main(){

char ch;

printf("enter a character:");
scanf("%c", &ch);

if(ch >= 'a' && ch >= 'z' || ch >= 'A' && ch >= 'Z' ){
	printf("your variable is an alphabet");

	}

else{
	printf("your variable is not an alphabet");

	}

return 0;

}

