# include<stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num); // '&' yahan zaroori hai

    int i = 0;
    int sum = 0;

    do
    {
        sum = sum + i;
        i++; // 'i' ko increment karna zaroori hai
    } while (i <= num);
    printf("The sum is  : %d", sum);
    return 0;
}

// Run On terminial Ctrl + `
// gcc problem_03.c; .\a.exe (windows)