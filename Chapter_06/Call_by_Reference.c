// Call by value in function without pointer 
# include<stdio.h>
void square(int n);
void _sqr(int *n);
int main(){
    int number = 4 ;
    square(number); // 16
    printf("square of number is : %d\n",number); // 4


    _sqr(&number);
    printf("square of number is : %d\n",number); // 16
    return 0;
}
void square(int n){
    n = n * n ;
    printf("square of number is : %d\n",n);
}
void _sqr(int *n){
    *n = (*n)*(*n);
    printf("square of number is : %d\n",*n);
}
// Run On terminial Ctrl + `
// gcc Call_by_Reference.c; .\a.exe (windows)