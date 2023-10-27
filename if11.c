#include <stdio.h>
int main(){

char week;

printf("enter a weekday number:");
scanf("%d", &week);


if(week == 1){
	printf("your day is monday.");

	}
else if(week == 2){
	printf("your day is tuesday.");

	}
else if(week == 3){
	printf("your day is wednesday.");

	}
else if(week == 4){
	printf("your day is thursday.");

	}
else if(week == 5){
	printf("your day is friday.");

	}
else if(week == 6){
	printf("your day is saturday.");

	}
else if(week == 7){
	printf("your day is sunday.");

	}
else{
	printf("your day value is invalid.");

	}

return 0;

}

