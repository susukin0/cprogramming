#include <stdio.h>
int main(){

char str[100];
int k;
printf("a string:");
fgets(str, 100, stdin);
printf("the string is %s", str);
k=0;
while(str[k]!='\0') k++;
printf("\nNumber of characters: %d ", k);

return 0;
}

