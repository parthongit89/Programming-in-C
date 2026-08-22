// Array is pointer 
#include <stdio.h>
int main(){

    // Initialize the array and and stored addressin ptr
    // Method 1
    int arr[7];
    int *ptr = &arr[0];

    // Or

    // Method 2
    int *ptr = &arr;
    return 0 ;

}

// Run On terminial Ctrl + `
// gcc NA -- > Read (windows)