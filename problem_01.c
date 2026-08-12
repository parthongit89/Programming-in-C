// gcc problem_01.c; .\a.exe

# include<stdio.h>
int main(){
    int marks ;
    char feature ;
    printf("Select the feature : ");
    scanf("%c",&feature);
    

    switch (feature)
    {
    case 'm':
        // Condition of provided problem
        printf("Enter your marks : ");
        scanf("%d",&marks);
        (30 < marks <=100)? printf("You PASS"):printf("You FAIL");
        break;
    
    default:
        printf("Unfortunately Service not available.");
    }
    

    return 0;
}