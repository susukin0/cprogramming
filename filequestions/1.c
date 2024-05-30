#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    FILE *fptr;
    char content[MAX_LENGTH];

    // Open the file in read mode
    fptr = fopen("/home/localhost/test.txt", "r");
    if (fptr == NULL) {
        printf("Unable to open the file for reading.\n");
        return 1;
    }

    // Read content from file
    if (fgets(content, MAX_LENGTH, fptr) == NULL) {
        printf("Unable to read content from the file.\n");
        fclose(fptr);
        return 1;
    }
    fclose(fptr);

    // Reverse the content
    int length = strlen(content);
    for (int i = 0; i < length / 2; i++) {
        char temp = content[i];
        content[i] = content[length - i - 1];
        content[length - i - 1] = temp;
    }

    // Open the same file in write mode (which clears the previous content)
    fptr = fopen("/home/localhost/test.txt", "w");
    if (fptr == NULL) {
        printf("Unable to open the file for writing.\n");
        return 1;
    }

    // Write reversed content back to the file
    if (fputs(content, fptr) == EOF) {
        printf("Unable to write content to the file.\n");
        fclose(fptr);
        return 1;
    }
    fclose(fptr);

    printf("Content reversed and written back to the file successfully.\n");

    return 0;
}
