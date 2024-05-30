#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char word[100];
    char ch;
    int i = 0;
    int is_previous_char_alpha = 0;

    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Open a temporary file for writing
    FILE *tempFile;
    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error creating temporary file.\n");
        return 1;
    }

    // Read characters from the file
    while ((ch = fgetc(file)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // If character is an alphabet
            if (!is_previous_char_alpha) {
                // Capitalize the first character of the word
                ch = (ch >= 'a' && ch <= 'z') ? (ch - 'a' + 'A') : ch;
            }
            word[i++] = ch;
            is_previous_char_alpha = 1;
        } else {
            if (i > 0) {
                // Write the word to the temporary file
                fprintf(tempFile, "%s", word);
                i = 0;
            }
            // Write the non-alphabetic character to the temporary file
            fprintf(tempFile, "%c", ch);
            is_previous_char_alpha = 0;
        }
    }

    // Close the files
    fclose(file);
    fclose(tempFile);

    // Remove the original file
    remove(filename);

    // Rename the temporary file to the original filename
    rename("temp.txt", filename);

    printf("Successfully capitalized the first characters of the words in the file.\n");

    return 0;
}
