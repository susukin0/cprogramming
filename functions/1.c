#include <stdio.h>
int prime(int a){
if(a ==2){printf("%d is a prime number", a);}
for(int i=2; i<a; i++){
    if(a % i == 0){
        printf("%d is not a prime number", a);
        return 0;
    }
    else{
        printf("%d is a prime number", a);
        return 0;
    }
}
return 0;
}

int main(){
    int number;
    scanf("%d", &number);
    prime(number);
    return 0;
}