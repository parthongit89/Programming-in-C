// gcc area_of_square.c; .\a.exe

#include<stdio.h>
int main(){
    int a;
    printf("Enter the side of square : ");
    scanf("%d",&a);
    // int area = a*a;
    // printf("The area of squre in %d",area);
    printf("The area of squre in %d",a*a);
    return 0;
}