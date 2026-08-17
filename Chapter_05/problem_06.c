// find factorial of n 
# include <stdio.h>
//  Function Declaration 
int Recursivefac(int n);

int main(){
    int n;
    printf("Enter the number for calculating sum of n natural numbers : ");
    scanf("%d",&n);
    printf("The Factorial of %d  is  %d", n,Recursivefac(n));
    return 0 ;
}
int Recursivefac(int n){
    
    // Condition if n = 0 
    if (n==1){
        return 1 ;
    }
    // Recursion of sum 
    return n *  Recursivefac(n-1);
}

// Run On terminial Ctrl + `
// gcc problem_06.c; .\a.exe (windows)