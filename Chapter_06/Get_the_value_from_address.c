// Format specifer in pointer
#include<stdio.h>
int main(){
    
    int age = 18 ;
    int *ptr = &age ;

    // Accesing value from address : --> 
    printf("The Allocation of address from its value accessing by 3 ways: -- >\n");

    printf("%d\n",age); // 18 <-- m1
    printf("%d\n",*ptr); // 18 <-- m2
    printf("%d\n",*(&age)); // 18 <-- m3
    return 0 ;
}
// Run On terminial Ctrl + `
// gcc Get_the_value_from_address.c; .\a.exe (windows)