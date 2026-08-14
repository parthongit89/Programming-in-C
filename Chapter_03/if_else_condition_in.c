// gcc if_else_condition_in.c; .\a.exe

# include<stdio.h>
int main(){
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);

    // Conditional statements
    if (age>18){
        printf("You are eligible for voting");
    }
    else if( 13< age <=18) {
        printf("Teenager");
    }
    else{
        printf("You are not eligible for voting");
    }
    return 0 ;
}