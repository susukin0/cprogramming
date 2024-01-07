#include <stdio.h>
int prime(int a){
for(int i=2; i<a; i++){
    if(a % i == 0){
        printf("a");
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