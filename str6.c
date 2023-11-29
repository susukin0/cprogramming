#include <stdio.h>
int main(){
char str1[100],str2[100];
int k,i,n;
printf("first string:");
fgets(str1,100,stdin);
printf("second string:");
fgets(str2,100,stdin);
printf("how many elements do you want to append?");
scanf("%d", &n);

k=0;
while(str1[k]!='\0') k++;
i=0;
while(str2[i]!='\0' && i<n){
str1[k]=str2[i];
k++;i++;
}
str1[k]='\0';
printf("joined string is: %s", str1);

return 0;
}

