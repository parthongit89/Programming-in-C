// gcc Ternery_operator.c; .\a.exe
// Consize format of conditions

#include<stdio.h>
int main(){
    int age ;
    printf("Enter your age : ");
    scanf("%d",&age);

    // Ternary operator syntax
    (age>18)? printf("You are adult") : printf("You are Teenager");
    // ^-- Condition ^--dosomethingTRUE : ^--dosomethingFALSE ;
    // Condition ? Truestatement : Falsestatement ;


    return 0;
}