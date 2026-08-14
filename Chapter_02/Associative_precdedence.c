// gcc Associative_precdedence.c; .\a.exe

#include<stdio.h>
int main(){
    // Left to right assign opertor 
    int a = 7 * 3 / 3 * 2 ;
    printf("The out of associative precedence is : %d", a);
    return 0 ;

}