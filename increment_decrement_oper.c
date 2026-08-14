//  Increment and Decrement operator :
#include<stdio.h>
int main(){

    // increment operator 
    // ++i , i++

     int i = 0 ; 
    // i = 0 + 1  | i ++ (post increment operator)
    //  Use , then increse
    printf("%d \n",i++); 
    printf("%d \n",i);
    

    int i = 0 ; 
    // i = 1 ; < -- | ++ i (pre increment operator)
    //  increse , then use
    printf("%d \n",++i); 
    printf("%d \n",i);
    

    // Decrement operator ------------------------- 
    // --i , i--

    int i = 3 ; 
    // i = 3  -- > i = 2| i-- (post decerement operator)
    //  Use , then decrease
    printf("%d \n",i--); 
    printf("%d \n",i);
    
    int i = 3 ; 
    // i = 2 ; < -- | --i (pre drecrement operator)
    //  decrese , then use
    printf("%d \n",--i); 
    printf("%d \n",i);
    return 0;

}

// Run On terminial Ctrl + `
// gcc increment_decrement_oper.c; .\a.exe