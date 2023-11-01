#include <stdio.h>

int num;
int i;
int j;

int main(){
	printf("enter a number:");
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++)
	{
		for(j = 1; j <= num; j++) printf("%4d", i * j);
		printf("\n"); 
	}
	
	return 0;
}