#include <stdio.h>
int main(){
	
int num;
printf("enter a number:");
scanf("%d", &num);
if(num % 5 == 0 && num % 11 == 0){
	printf("your number is divisible by both 5 and 11.\n");
	
}
else{
	printf("your number sucks.\n");
}

return 0;
}