// gcc Format_Specifier_for_use_variable_in_C.c; .\a.exe
// %d --> integers
// %f -->Real no. (decimal)
// %c -->Char


#include<stdio.h>
int main () {
    int num = 10 ; 
    printf("Number stored in num %d \n", num);
    char charcter= 'p';
    printf("Charcter stored in char %c \n", charcter);
    float Real_num = 2.3;
    printf("Real num stored in  %f \n",Real_num );
    return 0;
}