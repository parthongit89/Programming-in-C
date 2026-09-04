// intiallize structures 
#include<stdio.h>
#include<string.h>

struct Student
{
    char name[100];
    int id ;
    int marks ;

};

int main(){
    
    // Initialization of structures directly through arrays 
    struct Student s1 = {"Parth" , 261795 ,522};
    struct Student s2 = {"Vikas" , 261794 ,422};

    printf("Student name 1 : %s" ,s1.name);
    return 0;

}

// Run On terminial Ctrl + `
// gcc Initialization_of_structures.c; .\a.exe (windows)