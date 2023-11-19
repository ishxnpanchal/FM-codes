#include<stdio.h>
int main()
{
    int Arr[100],i,j,n,temp,ArrB[100],large,pos;//Declaring variables
    printf("Enter number of integers in the array: ");//reading no. of elements
    scanf("%d",&n);


    printf("Enter the integers:");
    //loop for reading elements
    for(i=0;i<n;i++)
        scanf("%d",&Arr[i]);

    //loop for printing array
    printf("Array entered is: ");
    for(i=0;i<n;i++)
    {
        printf("%d, ",Arr[i]);
        ArrB[i]=Arr[i];
    }
        printf("\n");

    //bubble sort
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
        }
    }

    //print sorted array
    printf("Sorted array (ascending order): ");
    for(i=0;i<n;i++)
        printf("%d, ",Arr[i]);
    printf("\n");

    //selection sort
    for(i=0;i<n-1;i++)
    {
        large=ArrB[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if (large<ArrB[j])
            {
                large=ArrB[j];
                pos=j;
            }
        }
        ArrB[pos]=ArrB[i];
        ArrB[i]=large;
    }

    //printing result
    printf("Sorted array (descending order): ");
    for(i=0;i<n;i++)
        printf("%d, ",ArrB[i]);
    return 0;
}
