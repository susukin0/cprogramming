#include <stdio.h>


int num;


int main(){
	printf("enter a number: ");
	scanf("%d", &num);
	
	if(num < 0){
		printf("your number is negative.");
		}
		else if(num == 0){
			printf("your number is 0.");
		}
		else if(num > 0){
			printf("your number is positive");
		}
	
return 0;	
}
	
