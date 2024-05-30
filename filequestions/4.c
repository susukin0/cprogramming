#include <stdio.h>

#define FILENAME "/home/localhost/test.txt" // Change this to the name of your encrypted file
#define OUTPUT_FILENAME "/home/localhost/test1.txt" // Change this to the name of your output file

void decryptFile(FILE *inputFile, FILE *outputFile) {
    char c;
    while ((c = fgetc(inputFile)) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            c--; // Decrement ASCII code by 1
            if ((c < 'a' && c >= 'a' - 1) || (c < 'A' && c >= 'A' - 1)) {
                c += 26; // Wrap around to 'z' or 'Z' if necessary
            }
        }
        fputc(c, outputFile);
    }
}

int main() {
    FILE *inputFile, *outputFile;

    // Open input file for reading
    inputFile = fopen(FILENAME, "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return -1;
    }

    // Open output file for writing
    outputFile = fopen(OUTPUT_FILENAME, "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return -1;
    }

    // Decrypt the file
    decryptFile(inputFile, outputFile);

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    printf("File decrypted successfully.\n");

    return 0;
}
