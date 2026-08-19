// Problem_01
# include<stdio.h>
int main(){
    float items[3];
    float gst_rate = 0.18; // 18% GST
    printf("Enter the price of item 1 : ");
    scanf("%f",&items[0]);

    printf("Enter the price of item 2 : ");
    scanf("%f",&items[1]);

    printf("Enter the price of item 3: ");
    scanf("%f",&items[2]);

    for (int i = 0; i < 3; i++)
    {
        items[i] = items[i] + (items[i] * gst_rate);
    }

    printf("\nFinal prices including GST:\n");
    for (int i = 0; i < 3; i++)
    {
    printf("Item %d total: %.2f rs\n ", i + 1, items[i]);
    }
    
    
    return 0;

}


// Run On terminial Ctrl + `
// gcc problem_01.c; .\a.exe (windows)