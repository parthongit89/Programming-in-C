// New function in Strings
#include <stdio.h>
int main(){
    char str[100];
    gets(str); // Gets is dangeours 
    puts(str); // Sub-sidiery function

    // Read up to 100 characters safely from standard input
    fgets(str, sizeof(str), stdin);

    // Print the string to output
    puts(str);
    return 0;

}


// Run On terminial Ctrl + `
// gcc new_func_string.c; .\a.exe (windows)