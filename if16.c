#include <stdio.h>
int main(){

int side1;
int side2;
int side3;

printf("enter the first side of a triangle:");
scanf("%d", &side1);
printf("enter the second side of a triangle:");
scanf("%d", &side2);
printf("enter the third side of a triangle:");
scanf("%d", &side3);

if(side1 == side2 && side2 == side3){
	printf("triangle is equilateral.");


	}
else if(side1 == side2 || side1 == side3 || side2 == side3){
	printf("triangle is  isosceles.");


	}
else{
	printf("triangle is scalene.");


	}

return 0;

}

