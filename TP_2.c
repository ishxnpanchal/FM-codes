#include <stdio.h>

int main() {

    char str[200];//declaring string
    int i;//declaring integer
    char c;//declaring character
    double d;//declaring double

    printf("Enter a string: ")
    scanf("%s", str);//input string

    printf("Enter an integer: ");
    scanf("%d", &i);//input integer

    printf("Enter a character: ");
    scanf(" %c", &c);//input character

    printf("Enter a double: ");
    scanf("%lf", &d);//input double

    // Outputing the input values
    printf("\n entered values:\n");
    printf("String: %s\n", str);
    printf("Integer: %d\n", i);
    printf("Character: %c\n", c);
    printf("Double: %lf\n", d);

    return 0;
}
