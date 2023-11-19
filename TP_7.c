#include <stdio.h>

int main()
{
    int  i, j, a, swap;//declaring variables

    printf("Enter the number of elements\n");
    scanf("%d", &a);//reading no.of element

    int array[a];

    printf("Enter %d integers\n", a);

    for (i=0;i<a;i++)//reading elements
    {
        scanf("%d",&array[i]);
    }

    //bubble sort algorithm
    for (i=0;i<a-1;i++)
    {
        for (j = 0 ; j < a - i- 1; j++)
        {
            if (array[j] > array[j+1])
            {
                swap       = array[j];
                array[j]   = array[j+1];
                array[j+1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    //printing ordered list
    for (i = 0; i < a; i++)
        printf("%d\n", array[i]);
    return 0;
}
