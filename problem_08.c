// Factorial 

# include <stdio.h>
int main(){
    int fac = 1 ;
    int n ;
    printf("Enter the number : ");
    scanf("%d",&n);

    
    for (int i = 1; i <=n; i++)
    {
        fac = fac * i ;
    }
    printf("Factorial of %d is %d" ,n ,fac);

    return 0;
}
// Run On terminial Ctrl + `
// gcc problem_08.c; .\a.exe (windows)of num 
