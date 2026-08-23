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

// Method 2

#include <stdio.h>

int lenofStr(char fs[]);

int main(){

    char fs[100];
    printf("Enter the name : ");
    fgets(fs, 100, stdin);
    printf("Length is %d", lenofStr(fs));
    return 0;
}

int lenofStr(char fs[]){
    int count = 0;
    for (int i = 0; fs[i] != '\0'; i++)
    {
        count++;
    }
    return count-1;
}

// Run On terminal Ctrl + `
// gcc problem_03.c; .\a.exe (windows)