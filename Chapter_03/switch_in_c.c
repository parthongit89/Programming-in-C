// gcc switch_in_c.c; .\a.exe
#include<stdio.h>
int main(){
    char service ;
    printf("Enter your Service : ");
    scanf("%c",&service);
    
    // switch statement begun
    switch (service)
    {
    case 'p':
        printf("Your service of pancard loaded within in mins \n");
        printf("Loading...\n");
        break;
    case 'a':
        printf("Your service of aadhar card loaded within in mins \n");
        printf("Loading...\n");
        break;
    default:
        printf("Invalid service");
    }

    return 0;

}