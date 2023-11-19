#include<stdio.h>
#include<string.h>
int main()
{
    int i,n=0;//declaring variables
    char str[1000];//declaring string

    //reading string
    printf("Enter the text: ");
    gets(str);

    //counting words
    for(i=0;str[i]!='\0';i++)
    {
        if (str[i]==' '&&str[i+1]!=' ')
            n++;
    }

    /printing result
    printf("Number of words = %d",n+1);
    return 0;
}
