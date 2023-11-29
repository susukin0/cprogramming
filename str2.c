#include <stdio.h>
int main(){

char str[100];
int k;
printf("a string:");
fgets(str,100, stdin);
printf("the string is %s", str);
k=0;
while(str[k]!='\0'){
	if(str[k]>= 'A' && str[k]<= 'Z') str[k]+=32;
	k++;
}
printf("\nstring is in lower case:%s ", str);

return 0;
}

