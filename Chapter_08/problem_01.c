// Print the value of array
#include <stdio.h>
void printstring(char fs[]);

int main(){
    char fs[] = {"Parth"}; 
    printstring(fs);
    return 0;
}

void printstring(char fs[]){
    for (int i = 0; fs[i] != '\0' ; i++)
    {
        printf("%c\t",fs[i]);
    }
    
}
// Run On terminial Ctrl + `
// gcc problem_01.c; .\a.exe (windows)
