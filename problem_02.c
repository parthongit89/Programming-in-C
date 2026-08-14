//  Problem based on while loop

# include<stdio.h>
int main(){
    int num ;
    printf("Enter the number :  ");
    scanf("%d",&num);

    int i = 0 ;
    while(i <= num) {
        printf("%d \n" ,i) ;
        i++ ;
    }
    return 0;
}

// Run On terminial Ctrl + `
// gcc problem_02.c; .\a.exe (windows)