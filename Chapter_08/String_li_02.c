// Using the strcpy(newstr ,oldstr) copy of str
#include <stdio.h>
#include <string.h>
int main(){
    char str1[] = {"Parth"} ;
    char str2[] = {"Sonavne"};

    printf("the value of str1 %s and str2 %s \n",str1,str2);
    strcpy(str1 ,str2); //Copy of str1 in str2
    printf("the value of str1 %s and str2 %s",str1,str2);
    return 0 ;
}
// Run On terminal Ctrl + `
// gcc String_li_02.c; .\a.exe (windows)