#include <stdio.h>
int main()
{
    char str[50];//declaring character
    int i, j ,n,flag=0;//declaring variables

    printf("Enter the string:");
    gets(str);//reading string

    for (i=0;str[i]!='\0';i++);//check each character of string
        n=i;

    for (i=0;i<n/2;i++)
        {
            if (str[i]!=str[n-i-1])//checking if it is a palindrome
            {
            flag=1;//assigning a new value to flag if it is true
            break;
            }
        }

    if (flag==0)
    printf("%s is a palindrome",str);//printing result
    else
    printf("%s is not a palindrome",str);//printing result
}
