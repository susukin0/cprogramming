#include <stdio.h>


int N;
int i;


int main(){
	
	printf("enter a number:");
	scanf("%d", &N);
	
	
	for(i = 1; i <= N; i++){
		if( i % 2 == 0){
			printf("%d\n", i);
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}