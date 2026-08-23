//  Introduction of Strings in C
// A charater array which having \0 null character  -- > termination of strings 
#include <stdio.h>
int main(){
    // Method 1
    char fs[] = {'P','a','r','t','h','\0'} ;
    char ls[] = {'S','o','n','a','v','a','n','e','\0'};

    // Method 2
    char fs_01[] = {"Parth"};
    char ls_01[] = {"Sonavane"};

    return 0;


    
}
// Run On terminial Ctrl + `
// gcc strings.c; .\a.exe (windows)
