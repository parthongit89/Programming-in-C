// Swapping the values of variable using pointers 
// Call by value 
# include <stdio.h>
void swap(int a , int b) ;
void _swap(int *a ,int  *b);

int main (){
    int x = 3 ;
    int y  = 5 ;
    _swap(&x,&y);
    printf("The value of x : %d and y : %d after\n" ,x,y);
    return 0 ;

}

// Call by reference(Pointers) 
void _swap(int *a ,int  *b){
    int t = *a ;
    *a = *b ;
    *b = t;
}

// Call by value
void swap(int a , int b) {
    int t = a;
    a = b;
    b = t;
    printf("The value of a : %d and b : %d after\n",a,b);
}
// Run On terminial Ctrl + `
// gcc Swapping_variables_using_pointers.c; .\a.exe (windows)