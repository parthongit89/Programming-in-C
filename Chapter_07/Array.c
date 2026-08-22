// Boiler plates
#include<stdio.h>
int  main() {
    // Array for integers allocating 2 indexed at a time
    int _int_array[2];

    // Array for Charcters allocating 10 indexed at a time
    char _char_arry[10];

    // Array for Float allocating 2 indexed at a time
    float _float_array[2];

    // Representation of Array
    int marks[] = {99 ,98 , 97};
    

    // Input-Output in array
    int marks[3];
    printf("Enter the marks 1 : ");
    scanf("%d",&marks[0]); // &(address)marks(variable-array)[position_memory/index]

    printf("Enter the marks 2 : ");
    scanf("%d",&marks[1]);

    printf("Enter the marks 3 : ");
    scanf("%d",&marks[2]);

    printf("marks_01 : %d, marks_02 : %d , marks_03 : %d",marks[0],marks[1],marks[2]);
    return 0;
}


// Run On terminial Ctrl + `
// gcc Array.c; .\a.exe (windows)

