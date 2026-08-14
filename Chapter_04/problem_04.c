// Input by user to print table 

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    // for (int i=num,j=1 ; i,j<11; j++)
    // {
    //     printf("%d\n",i*j);
    // }
    // return 0 ;

    // Efficient 
    for (int i = 1; i < 11; i++)
    {
        printf("%d\n",num * i);
    }
    
}


// Run On terminial Ctrl + `
// gcc problem_04.c; .\a.exe (windows)