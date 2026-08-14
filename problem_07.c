// odd number upto 5 to 50
# include<stdio.h>
int main(){
    for (int i = 5; i < 50; i++)
    {
        if (i%2 == 0)
        {
            continue;
        }
        printf("%d\n",i);
    }
    
}

// Run On terminial Ctrl + `
// gcc problem_07.c; .\a.exe (windows)