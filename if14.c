#include <stdio.h>
int main(){

int angle1;
int angle2;
int angle3;
int sum;


printf("enter angle one:");
scanf("%d", &angle1);
printf("enter angle two:");
scanf("%d", &angle2);
printf("enter angle three:");
scanf("%d", &angle3);


sum = angle1 + angle2 + angle3;

if(sum == 180 && angle1 != 0 && angle2 != 0 && angle3 != 0){
	printf("angles are valid; triangle can exist.");

	}
else{
	printf("invalid angles for a triangle.");

	}



return 0;

}

