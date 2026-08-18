// Print the value of i throuh pointer to pointer
#include<stdio.h>
int main(){
    int i = 5 ;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d",**pptr); // 5
    return 0;

}
// Run On terminial Ctrl + `
// gcc problem_01.c; .\a.exe (windows)