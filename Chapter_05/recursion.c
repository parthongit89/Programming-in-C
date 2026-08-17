// Recursion of sum of n natural no.  n + sum(n-1)

# include <stdio.h>
//  Function Declaration 
int RecursiveSum(int n);

int main(){
    int n;
    printf("Enter the number for calculating sum of n natural numbers : ");
    scanf("%d",&n);
    printf("The sum of %d natural is  %d", n,RecursiveSum(n));
    return 0 ;
}
int RecursiveSum(int n){
    
    // Condition if n = 0 
    if (n==0){
        return 0 ;
    }
    // Recursion of sum 
    return n + RecursiveSum(n-1);
}
// Run On terminial Ctrl + `
// gcc recursion.c; .\a.exe (windows)