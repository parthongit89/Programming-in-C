// Format specifer in pointer
#include<stdio.h>
int main(){
    
    int age = 18 ;
    int *ptr = &age ;
    printf("The address of age and pointer are same: -- >\n");
    printf("%p\n",&age); // 0061FF1C
    printf("%p\n",ptr); // 0061FF1C

    // But tha address of pointer itself is storing in different address :
    printf("---------------\n");
    printf("%p\n",&ptr); // 0061FF18
    return 0 ;
}
// Run On terminial Ctrl + `
// gcc Format_specifier_in_pointer.c; .\a.exe (windows)