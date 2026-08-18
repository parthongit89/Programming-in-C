// Call by value in function without pointer 
# include<stdio.h>
void square(int n);
int main(){
    int number = 4 ;
    square(number);
    printf("square of number is : %d\n",number);
    return 0;
}
void square(int n){
    n = n * n ;
    printf("square of number is : %d\n",n);
}
// Run On terminial Ctrl + `
// gcc call_by_value_func.c; .\a.exe (windows)