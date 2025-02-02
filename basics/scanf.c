#include <stdio.h>

// %[flags][width][.precision]specifier

int main()
{
    int n;
    char ch;
    float f;
    double d;
    char buffer[50];
    float f1, f2, f3;

    // printf("Enter a number: ");
    // scanf("%d", &n);

    // printf("Enter a char: ");
    // scanf(" %c", &ch);

    // printf("Enter a float: ");
    // scanf(" %f", &f);

    // printf("Enter a double: ");
    // scanf(" %lf", &d);

    // printf("Enter floats f1, f2, f3: ");
    // scanf(" %f %f %f", &f1, &f2, &f3);

    printf("Enter a string: ");
    scanf("%s", buffer);

    // printf("n: %d\n", n);
    // printf("ch: %c\n", ch);
    // printf("f: %.5lf\n", f);
    // printf("d: %.3lf\n", d);
    // printf("sum of floats: %.3lf\n", f1 + f2 + f3);
    printf("str: %s\n", buffer); // scanf considers space as a newline character

    return 0;
}