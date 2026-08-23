// Print name of using format specifier in string 
#include <stdio.h>
int main(){
    char fs_name[50];
    char ls_name[50];
    printf("Enter the first name :");
    printf("Enter the last name :");
    scanf("%s",fs_name);
    scanf("%s",ls_name);
    printf("Your name is  : %s", fs_name);
    printf("Your name is  : %s", ls_name);
    return 0;
}
// Run On terminial Ctrl + `
// gcc problem_02.c; .\a.exe (windows)
