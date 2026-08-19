//  Increasing and decreasing the memory using pointer arithmetic 
#include <stdio.h>
int main(){
    int age = 18 ;
    int *ptr  = &age ;
    printf("Memory loaction before increment %u\n",ptr);
    ptr++;
    printf("Memory loaction after increment %u\n",ptr); //Increment of 4 byte fior int

    printf("Memory loaction before decrement %u\n",ptr);
    ptr--;
    printf("Memory loaction after decrement %u",ptr);//Decrement of 4 byte fior int
    return 0;
}

// Run On terminial Ctrl + `
// gcc Pointers_Arithmetic.c; .\a.exe (windows)