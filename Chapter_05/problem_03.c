// Printing table using function 

void table(int n);

# include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    table(n); // argument / actual parameter 
    return 0 ;
}
     
void table(int n){
    //       ^------> Parameter/formal Parameter
    for (int i = 1; i < 11; i++)
    {
       printf("%d\n",i*n) ;
    }
    
}

// Run On terminial Ctrl + `
// gcc problem_03.c; .\a.exe (windows)