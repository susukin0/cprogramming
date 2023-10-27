#include <stdio.h>
int main(){

int side1;
int side2;
int side3;

printf("enter the first side of a triangle:");
scanf("%d", &side1);
printf("enter the second side of a triangle:");
scanf("%d", &side2);
printf("enter the third side of a triangle");
scanf("%d", &side3);

if(side1 + side2 > side3 || side2 + side3 > side1 || side3 + side1 > side2){
	printf("valid sides; triangle does exist.");
	}

else{
	printf("invalid sides; no triangle exists.");


	}



return 0;

}

