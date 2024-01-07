#include <stdio.h>
#include <math.h>
int counter=0;
int prime(int a){
    if(a ==2){printf("%d is a prime number\n", a);} // sayi 2 ise asal
    for(int i=2; i<a; i++){ // asal sayi check loop
        if(a % i == 0){
        printf("%d is not a prime number\n", a);
        return 0;
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
int result=0;
    for(int i=a; i!=0; i/=10){ // basamak sayisi
        counter++;
    }
    for(int i=a; i!=0; i/=10){ // armstrong hesabi, 10a bolumunden kalan ile her seferinde bir basamagi alip toplariz
        remainder = i % 10;
        result += pow(remainder, counter);
    }
    if(a >= 2 && a <= 10){ // 2 ile 10 arasi armstrong degil
        printf("is not an armstrong number\n");
        return 0;
    }
    else if(result == a){ // esitlik varsa armstrong
        printf("is an armstrong number\n");
        return 0;
    }
    else{ // yoksa degil
        printf("is not an armstrong number\n");
        return 0;
    }
return 0;
}
int main(){
    int number;
    while(1==1){ // fantezi, sonsuza dek hesaplayabilirsin boylece
    scanf("%d", &number);
    prime(number);
    armstrong(number);
    }
    return 0;
}
