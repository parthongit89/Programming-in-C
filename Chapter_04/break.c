// introduction to break

#include<stdio.h>
int main(){
    for(int i = 1; i <=5 ; i+=1 ){
        if (i == 3)
        {
            break;
        }
        
        printf("%d\n",i);
    }

    return 0;

}
// Run On terminial Ctrl + `
// gcc break.c; .\a.exe (windows)