#include <stdio.h>
#include <math.h>
int counter=0;
int prime(int a){
    for(int i=2; i<a; i++){
        if(a % i == 0){
            printf("%d is not a prime number\n", a);
            return 0;
        }
        else if(a == 2){
            printf("%d is a prime number", a);
        }
        else{
            printf("%d is a prime number\n", a);
            return 0;
        } 
    }
return 0;
}
int armstrong(int a){
int remainder;
double result=0.0;
    for(int i=a; i!=0; i/=10){
        counter++;
    }
    for(int i=a; i!=0; i/=10){
        remainder = i % 10;
        result += pow(remainder, counter);
    }
printf("%f", result);
return 0;
}

int main(){
    int number;
    scanf("%d", &number);
    prime(number);
    armstrong(number);
    return 0;
}