// Reverse the array
#include<stdio.h>
void reversArray(int arr[] , int n);
void printArray(int arr[] , int n);
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    reversArray(arr,7);
    printArray(arr,7);
    return 0;

}

void printArray(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}
// Call by reference coz the pointer is arr
void reversArray(int arr[] , int n){
    for (int i = 0; i < n/2; i++)
    {
        int fsvalue = arr[i] ;
        int secvalue = arr[n-i-1] ;
        arr[i] = secvalue;
        arr[n-i-1] = fsvalue ;
    }
}

// Run On terminial Ctrl + `
// gcc reverse_array.c; .\a.exe (windows)