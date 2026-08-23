// Using strlen func
#include <stdio.h>
#include <string.h>

int main(){
    char arr[] ={"Parth"} ;
    
    // No count '\0' on string arr
    int length = strlen(arr);
    printf("%d",length);
    return 0;
}

// Run On terminal Ctrl + `
// gcc String_li.c; .\a.exe (windows)