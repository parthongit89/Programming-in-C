// String libraries 04
#include <stdio.h>
#include<string.h>
int main(){
    char str1[]= {"Parth"} ;
    char str2[] = {"Sonavane"};

    // Perform compare  string by ASCII values
    printf("The comparison between 2 string  is : %d " , strcmp(str1 ,str2));
    return 0 ;

}
// Run On terminal Ctrl + `
// gcc String_li_04.c; .\a.exe (windows)
