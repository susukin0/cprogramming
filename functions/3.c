#include <stdio.h>
int main(){
    int min,b,flag;
    scanf("%d %d", &min, &b);
    printf("prime numbers betweeen %d and %d are:\n", min, b);
    while(min<b){
        flag=0;
        for(int divide=2; divide<min; ++divide){
            if(min % divide == 0){
                flag = 1;
            }
        }
    if(flag == 0) printf("%d ", min);
    min++;
    }
    return 0;
}