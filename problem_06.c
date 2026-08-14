// user input when user enter the multiple of 7
#include<stdio.h>
int main(){
    int num ;
    do
    {
        printf("Enter the Number : ");
        scanf("%d",&num);
        if (num%7 == 0)
        {
            break;
        }
    } while (1); 
    printf("All set you enterd the multiple of 7 is %d",num);
    return 0;
}
// Run On terminial Ctrl + `
// gcc problem_06.c; .\a.exe (windows)