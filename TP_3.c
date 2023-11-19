#include <stdio.h>

int main() {
    int n,i,j;//declaring variables

    printf("Enter the number of rows: ");
    scanf("%d", &n);//read number of rows to print

    for (i = 1; i <= n; i++)//loop for rows
        {
        for (j = 1; j <= i; j++)//loop for columns and elements
         {
            printf("* ");//printing asterisk
        }


        printf("\n");// moving to next line
    }

    return 0;
}

