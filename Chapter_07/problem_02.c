// Count of odd numbers in array

#include <stdio.h>
void CountOdd(int arr[],int n);
int main(){
    int arr[] = {25,36,85,74,15,69,74,12};
    CountOdd(arr, 8);
    return 0;
}
void CountOdd(int arr[],int n){
    int count = 0 ;
    for (int  i = 0; i < n; i++)
    {
        if (i%2 != 0)
        {
            count += 1 ;
        }
        
    }
    printf(" The total count is  : %d",count);
}
// Run On terminial Ctrl + `
// gcc problem_02.c; .\a.exe (windows)