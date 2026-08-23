// String libraries 03
#include <stdio.h>
#include<string.h>
int main(){
    char str1[50]= {"Parth"} ;
    char str2[] = {" Sonavane"};

    // Perform Concatenation string 
    printf("The new string is : %s " , strcat(str1 ,str2));
    return 0 ;

}
// Run On terminal Ctrl + `
// gcc String_li_03.c; .\a.exe (windows)
