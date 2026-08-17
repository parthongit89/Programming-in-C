// Celsius to Fahrenheit conversion 
#include<stdio.h>
float  Fahrenheit(float n);
float  Celsius(float n);
int main(){
    float n ;
    char d ;
    printf("Enter the conversion text want to conversion between in Celsius or  Fahrenheit (C,f)  :");
    scanf("%c",&d);
    switch (d)
    {
    case 'C':
        printf("Enter the Value :");
        scanf("%f",&n);
        printf("The value of %f in Fahrenheit : %f " , n, Fahrenheit(n) );
        break;
    case 'f':
        printf("Enter the Value :");
        scanf("%f",&n);
        printf("The value of %f in Celsius : %f " , n, Celsius(n));
        break;
    default:
        printf("Invalid Request Try agian !!") ;
        break;
    }
    return 0;
}
float Fahrenheit(float n){
    return (n * 1.8 ) + 32;
}
float Celsius(float n){
    return (n - 32) * 5.0 / 9.0;
}
// Run On terminial Ctrl + `
// gcc problem_07.c; .\a.exe (windows)