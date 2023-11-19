#include<stdio.h>

void swap(int*, int*);//function to swap

int main()
{
    int a, b;//declaring variables

    printf("Enter values for a and b\n");
    scanf("%d%d", &a, &b);//reading values

    swap(&a, &b);//calling function

    printf("\Values after swapping: a = %d and b = %d\n", a, b);//displaying result

    return 0;
}

void swap(int *m, int *n)
{
    int temp;//assigning temporary variable to help swapping

    //swapping variables
    temp = *m;
    *m   = *n;
    *n   = temp;
}
