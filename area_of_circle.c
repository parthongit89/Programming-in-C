// gcc area_of_circle.c; .\a.exe
#include<stdio.h>
int main(){
    float a;
    printf("Enter the side of square : ");
    scanf("%f",&a);
    // int area_c = a*a;
    // printf("The area of Circle in %d",area_c);
    printf("The area of Circle in %f",3.14*a*a);
    return 0;
}