// Introduction to continue 
#include<stdio.h>
int main(){
    for (int i = 0; i < 5; i++)
    // skip
    {   if (i == 3)

        {
              continue;
        }    
         printf("%d\n",i);
    }
    
    return 0;
}


// Run On terminial Ctrl + `
// gcc continue.c; .\a.exe (windows)