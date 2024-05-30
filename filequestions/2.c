#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open the input file for reading
    inputFile = fopen("/home/localhost/test.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen("/home/localhost/test1.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    // Read characters from the input file
    while ((ch = fgetc(inputFile)) != EOF) {
        // If a white space character is encountered, read and write the next character
        if (isspace(ch)) {
            ch = fgetc(inputFile);
            if (ch != EOF) {
                // Ensure the character is a letter before writing
                if (isalpha(ch)) {
                    fputc(toupper(ch), outputFile); // Convert to uppercase and write to output file
                }
            }
        }
    }

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    printf("Abbreviations extracted and written to output.txt successfully.\n");

    return 0;
}
