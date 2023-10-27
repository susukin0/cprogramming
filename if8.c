#include <stdio.h>
int main(){

char ch;

printf("enter a character:");
scanf("%c", &ch);


if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'u' || ch == 'o'){
	printf("your character is a vowel");


}
else if(ch != 'a' || ch != 'e' || ch != 'i' || ch != 'u' || ch != 'o' && ch >= 'a' && ch <= 'z'){
	printf("your character  is not a vowel.");


	}


return 0;

}

