#include<stdio.h>
int main()
{
    int A[100],i,j,n,temp,elm,high,low,mid; //declaring variables

    printf("Enter the no. of elements:\n");
    scanf("%d",&n); //reading number of elements

    printf("Enter the integers:");

    for(i=0;i<n;i++) //handling array elements
        scanf("%d",&A[i]); //reading elements
    printf("Array entered is: ");

    for(i=0;i<n;i++) //handling array elements
        printf("%d, ",A[i]); //printing array
        printf("\n");

    for(i=0;i<n-1;i++) // loop for handling iterations
    {
        for(j=0;j<n-i-1;j++) //handling array elements
        {
            if(A[j]>A[j+1]) //sorting comparison
            {
                //swapping
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    //printing sorted array
    printf("Array after sorting: ");
    for(i=0;i<n;i++)
        printf("%d, ",A[i]);

    printf("Enter the element to be found: ");
    scanf("%d",&elm);

    //algorithm for binary search
    low=0;
    high=n-1;
    do
    {
        mid=(high+low)/2;
        if (elm>A[mid])
        {
            low=mid+1;
        }
        if (elm<A[mid])
        {
            high=mid-1;
        }
    }while(elm!=A[mid] && low<=high);

    if (elm==A[mid])
        printf("Element is at %d position",mid+1);
    else {printf("Element does not exist");}

    return 0;
}
