// stored the data of 3 students in structure 

#include<stdio.h>
#include<string.h>
struct student 
{
    int id ;
    float marks ;
    char name[100];

};

int main(){
    struct student s1 ;
    s1.id = 261795 ;
    s1.marks = 8.6 ;
    strcpy(s1.name , "Parth");
    
    struct student s2 ;
    s2.id = 2617969 ;
    s2.marks = 2.2;
    strcpy(s2.name , "Vikas");


    struct student s3 ;
    s3.id = 2617964 ;
    s3.marks = 9.7;
    strcpy(s3.name , "Viraj");

    return 0 ;
}

// Run On terminial Ctrl + `
// gcc problem_01.c; .\a.exe (windows)