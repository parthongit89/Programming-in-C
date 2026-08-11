// gcc Operator_prcedence.c; .\a.exe

// oprator precedence 
// * , / , % --> + , - --> =

#include<stdio.h>
int main(){
    int a = 9 + 4 * 7 ;
    printf("The output is %d",a);
    return 0 ;
}