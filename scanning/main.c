#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);

    int integer;
    printf("Enter an integer: ");
    scanf("%d", &integer);

    float marks;
    printf("Enter an float: ");
    scanf("%f", &marks);

    long longInteger;
    printf("Enter long integer: ");
    scanf("%li", &longInteger);

    double doubleFloat;
    printf("Enter a double: ");
    scanf("%lf", &doubleFloat);

    char name[100];
    printf("What is your name: ");
    scanf("%s", name);
    printf("-------------------------------------------------------------\n");
    printf("Hello, %s\nYou typed the following:\nLetter:%c\nInteger:%d\nFloat:%f\nLong:%li\nDouble:%lf\n",
           name, letter, integer, marks, longInteger, doubleFloat);
}