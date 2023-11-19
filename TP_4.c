#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vow = 0,i,m;

    printf("Enter a string: ");
    gets(str);

    m=strlen(str);
    printf("length=%d\n",m);

    // Count the number of vowels in the string
    for (i = 0; i < m; i++)
        {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')//check if it is a vowel
            {
            vow++; //increment vowel counter if vowel is detected
            }
        }

    printf("Number of vowels in the string: %d\n", vow);// Output value of vowel counter

    return 0;
}
