// Input as odd num repeatedly 
#include<stdio.h>
int main(){
    int num ;
    // True  == 1
    for (int i = 1 ; 1 ; i++) 
    {
      printf("Enter the number : "); 
      scanf("%d",&num);
      if (num%2 != 0)
      {
        break;
      }
      
    }
    printf("Done you eneterd the odd number %d",num);
}
// Run On terminial Ctrl + `
// gcc problem_05.c; .\a.exe (windows)