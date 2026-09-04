// Structres in C
#include<stdio.h>
#include<string.h>

// Structure define 

struct student
{
    int id;
    float marks;
    char name[100] ;

};

int main(){

    struct student s1 ;  // like instance created in c
    s1.id = 261795 ;
    s1.marks = 9.8 ;
    strcpy(s1.name ,"Parth");

    printf("Student name = %s \n",s1.name);
    printf("Student Id = %d \n",s1.id);
    printf("Student marks = %f\n ",s1.marks);
    return 0;

}

// Run On terminial Ctrl + `
// gcc structres.c; .\a.exe (windows)
