//  Increasing and decreasing the memory using pointer arithmetic 
#include <stdio.h>
int main(){
    int age = 18 ;
    int *ptr  = &age ;
    printf("Memory loaction before increment %u\n",ptr);
    ptr++;
    printf("Memory loaction after increment %u\n",ptr);

    printf("Memory loaction before decrement %u\n",ptr);
    ptr--;
    printf("Memory loaction after decrement %u",ptr);
    return 0;
}

// Run On terminial Ctrl + `
// gcc Pointers_Arithmetic.c; .\a.exe (windows)