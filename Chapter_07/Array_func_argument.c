// Array as a function argument 
// Function Declaration 

#include <stdio.h> 
void printnumbers(int arr[] ,int n);
int main(){

    int arr[] = {25,75,85,35,69,74,24};
    printnumbers(arr,7);
    return 0;
}
void printnumbers(int arr[] ,int n){
    for (int i = 0; i < n; i++)
    {
        printf("Array item : %d\n" ,arr[i]);
    }
    printf("Done");
}

// Run On terminial Ctrl + `
// gcc Array_func_argument.c; .\a.exe (windows)
