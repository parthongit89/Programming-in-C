// Problem_02
#include<stdio.h>

void lang_Ind();
void lang_fren();

int main(){
    char lang ;
    printf("Enter your Language : ");
    scanf("%c",&lang);
    
    // switch statement begun
    switch (lang)
    {
    case 'i':
        lang_Ind();
        break;
    case 'f':
        lang_fren();
        break;
    default:
        printf("Invalid lang not updated yet !");
    }

    return 0;

}
void lang_Ind(){
    printf("Namaste");
}
void lang_fren(){
    printf("Bonjour");
}

// Run On terminial Ctrl + `
// gcc problem_02.c; .\a.exe (windows)