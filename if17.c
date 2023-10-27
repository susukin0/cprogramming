#include <stdio.h>
#include <math.h>

int main(){

int a;
int b;
int c;
int root1;
int root2;
int discriminant;

printf("coefficient a:");
scanf("%d", &a);
printf("coefficient b:");
scanf("%d", &b);
printf("coefficient c:");
scanf("%d", &c);

discriminant = (b * b) - (4 * a * c);

if(discriminant > 0){
	root1 = (-b + sqrt(discriminant)) / (2*a);
	root2 = (-b - sqrt(discriminant)) / (2*a);
	printf("solutions are %d, and %d.", root1, root2);

	}
else if(discriminant == 0){
	root1 = root2  = -b / (2*a);
	printf("solutions are %d, and %d.", root1, root2);


	}
else{
	root1 = -b / (2*a);
	root2 = -b / (2*a);
	printf("solutions are %d, and %d.", root1, root2);
	}

return 0;

}

