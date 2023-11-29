#include <stdio.h>
int main(){

char str[100];
char str2[100];
int k;
printf("a string:");
fgets(str,100, stdin);
printf("the string is %s", str);
for(k=0; k<100; k++){
str2[k]= str[k];

	}
printf("second string is also: %s", str2);
return 0;
}

