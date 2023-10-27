#include <stdio.h>
int main(){

char ch;

printf("enter a character:");
scanf("%c", &ch);

if(ch >= 'a' && ch  <= 'z'){
	printf("your variable is an alphabet ");

}
else if(ch >= '0' && ch <= '9'){
	printf("your variable is a number");

	}
else{
	printf("your variable is a special character.");

	}

return 0;

}

