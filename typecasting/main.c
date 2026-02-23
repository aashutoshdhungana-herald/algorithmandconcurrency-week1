#include <stdio.h>

void main()
{
    char letter = 'a';
    int test = letter;
    printf("Character is casted implicitly to integer: %i\n", test);
    long longInteger = test;
    printf("Integer is casted implicitly to Long: %li\n", longInteger);
    float floatNum = longInteger;
    printf("Long is casted implicitly to float: %f\n", floatNum);
    double doubleNum = floatNum;
    printf("Float is casted implicitly to double: %lf\n", doubleNum);

    doubleNum = 123467.123231;
    printf("Double num %lf\n", doubleNum);
    floatNum = (float)doubleNum;
    printf("Double is casted explicitly to floatNum: %f\n", floatNum);
    longInteger = (long)floatNum;
    printf("Float is casted explicitly to long: %ld\n", longInteger);
    test = (int)longInteger;
    printf("Long is casted explicitly to int %d\n", test);
    letter = (char)test;
    printf("Integer is casted explicitly to character %c\n", letter);
}