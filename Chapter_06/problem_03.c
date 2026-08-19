// problem_03
# include<stdio.h>
void dowORK(int a , int b, int *sum ,int *pro ,int *avg);
int main(){
    int a = 4;
    int b = 5 ;
    int sum , pro, avg ;
    dowORK(a , b ,&sum ,&pro,&avg);
    printf("sum  = %d ,pro = %d ,avg = %d",sum,pro,avg);
    return 0;
}
void dowORK(int a , int b, int *sum ,int *pro ,int *avg){
    *sum  = a + b ;
    *pro =  a*b;
    *avg = (a+b)/2 ;
}


// Run On terminial Ctrl + `
// gcc problem_03.c; .\a.exe (windows)