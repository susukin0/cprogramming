#include <stdio.h>


int main(){

int array[1000];
int i, c, check=0, counter=0; // define variables

printf("enter the array size:"); // the array size
scanf("%d", &i);

for(int n=0; i>n; n++){ // a loop to get all elements for array

printf("enter an array element:\n");
scanf("%d", &array[c]);

}

for(int n=0; i>n; n++){ // check if two elements are equal, and count them
	for(int n2=1000; n2>=0; n2--){
		if(array[n] == array[n2]){

			counter++;
			}
		}
	}

printf("%d", counter);
	return 0;
}

