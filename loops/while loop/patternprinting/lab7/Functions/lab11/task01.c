#include <stdio.h>

int factorial (int n){
if (n==0)
{
    return 1;
}
else {

    return n*factorial(n-1);
}

}

int main (){

    int num, fact;
    printf("Enter the integer :");
    scanf("%d" ,&num);
    fact= factorial(num);
    printf("The factorial of %d is %d\n" , num , fact);
    return 0;
}