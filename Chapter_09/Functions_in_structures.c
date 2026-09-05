// Use of functiuon in structures 
#include<stdio.h>

//struct
struct EmployeePF
{
    char name[100];
    int id ;
    float bal ;
};

void credEmployee(struct EmployeePF E1); //  Define struct in function

int main(){
    struct EmployeePF E1 = {"Avinash" , 10125 , 25000.35};
    credEmployee(E1);
    return 0;

}
void credEmployee(struct EmployeePF E1){
    printf("%s\t%d\t%f\t",E1.name ,E1.id,E1.bal);
}


// Run On terminial Ctrl + `
// gcc Functions_in_structures.c; .\a.exe (windows)