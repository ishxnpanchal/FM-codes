#include<stdio.h>
int main()
{
    int n;//declaring variable
    printf("Enter the a number for calculating factorial: ");
    scanf("%d",&n);//reading n
    printf("The factorial of %d is: %d",n,fact(n));//printing result
    return 0;
}

//function to calculate factorial
int fact(int n)
{
    if (n==0)//base case
        return 1;
    return (n*fact(n-1));
}
