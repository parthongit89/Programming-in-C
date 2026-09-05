// Use of pointers in structure 
#include<stdio.h>
struct Student
{
    int roll ;

};
int main (){
    struct Student s1 ={100};
    struct Student s2 ={120};
    printf("Roll no student is  : %d\n", s1.roll);

    struct Student *ptr=&s1 ;
    printf("Roll no student is ptr assign : %d\n", (*ptr).roll);

    struct Student *ptr2=&s2 ;
    printf("Roll no student is ptr assign : %d\n", ptr->roll); // Use arrow pointer 
    
    // (*ptr) -->_address --> s1 ={100};
    //(*ptr).roll -- > _address --> 100

    return 0 ;
}

// Run On terminial Ctrl + `
// gcc Pointer_in_Structres.c; .\a.exe (windows)