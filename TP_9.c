#include<stdio.h>
int main()
{
    int i,j,B[100][100],sum=0,trace=0,secdiag=0;//declaring variables
    printf("Enter elements for a 4X4 matrix: ");
    for(i=0;i<4;i++)//loop for reading elements
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<4;i++)//loop for printing elements
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",B[i][j]);
            sum=sum+B[i][j];
            if (i==j)//to find trace elements
                trace=trace+B[i][j];
            if (i+j==3)
                secdiag=secdiag+B[i][j];
        }
        printf("\n");
    }

    //printing result
    printf("Sum of all elements of matrix is: %d\n",sum);
    printf("Trace of matrix is: %d\n",trace);
    printf("Sum of elements of secondary diagonal is: %d",secdiag);
    return 0;




}
