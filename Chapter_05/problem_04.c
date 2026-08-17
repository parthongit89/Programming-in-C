// Using math library

#include<stdio.h>
#include<math.h>

int main(){
    float n ;
    float Sqr ;
    printf("Enter the number : " ) ;
    scanf("%f",&n);

    // pow (double ,double) --> return float
    printf("the Squre of %f is %f",n , pow(n,2) ); 
    return 0;
}

// Run On terminial Ctrl + `
// gcc problem_04.c; .\a.exe (windows)