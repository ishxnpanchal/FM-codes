#include <stdio.h>

int main() {
    int i,j; //declaring variables

    for (i = 1; i <= 5; i++) //loop  for rows
        {
        for (j = 1; j <= i; j++)//loop for column and column elemets
         {
            printf("* "); //printing asterisk
        }

        printf("\n"); //moving to next line
    }

    return 0;
}

