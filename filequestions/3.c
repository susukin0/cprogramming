#include <stdio.h>
int main(){
    FILE *finput, *foutput;
    char c;
    finput = fopen("/home/localhost/test.txt", "r");
    if(finput == NULL){
        printf("FILE COULDN'T BE OPENED RETURNING.");
        return 1;
    }
    foutput = fopen("/home/localhost/test1.txt", "w");
    if(foutput == NULL){
        printf("FILE COULDN'T BE OPENED RETURNING.");
        return 1;
    }
    while((c = fgetc(finput)) != EOF){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            c++; // Increment ASCII code by 1
            if ((c > 'z' && c <= 'z' + 1) || (c > 'Z' && c <= 'Z' + 1)) {
                c -= 26; // Wrap around to 'a' or 'A' if necessary
            }
        }
        fputc(c, foutput);

    }

    return 0;
}