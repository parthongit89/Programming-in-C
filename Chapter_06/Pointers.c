// Pointers introduction:
#include <stdio.h>
int main(){
    int n = 25; // Storing value in variable 
    int *ptr = &n; // location(address) of  n store in pointer(address store variable) 
    int _n =*ptr; //accessing those address  from pointer to point value in new variable _n
    printf("%d",_n);
    return 0 ;
}

// Run On terminial Ctrl + `
// gcc Pointers.c; .\a.exe (windows)