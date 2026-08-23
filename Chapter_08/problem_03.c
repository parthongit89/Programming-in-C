// Strings using pointers 
#include <stdio.h>

int lenofStr(char *fs);

int main() {
    char fs[100];
    printf("Enter the name: ");
    fgets(fs, 100, stdin);

    printf("Length is %d\n", lenofStr(fs));
    return 0;
}

int lenofStr(char *fs) {
    int count = 0;

    // Check for null terminator AND newline safely
    while (*fs != '\0' && *fs != '\n') {
        count++;
        fs++; // Move pointer to next character
    }

    return count;
}
// Run On terminial Ctrl + `
// gcc problem_03.c; .\a.exe (windows)