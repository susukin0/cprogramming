#include <stdio.h>
int main(){

char str[100];
int k;
printf("a string:");
fgets(str,100, stdin);
printf("the string is %s", str);
k=0;
while(str[k]!='\0'){
	if(str[k]>= 'a' && str[k]<= 'z') str[k]-=32;
	k++;
}
printf("\nstring is in upper case:%s ", str);

return 0;
}

