#include <stdio.h>
int main (){

    int n;
    printf("Enter Your Number");
    scanf("%d" , &n);

    if (n%5==0 || n%3==0)
    {
        printf("The Number is Divisible by 5 or 3");
    }
    else
    {
        printf("Number is Not Divisible by 5 or 3");
    }
    
    return 0;
}