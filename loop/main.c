#include <stdio.h>
#include <unistd.h>
int main()
{
    /*
    for (initialization_expression; condition_expression; reinitialization_expression);
    */
    int iterrationCount;
    printf("Enter how many times you want to iterate: ");
    scanf("%d", &iterrationCount);

    // int i = 0; // Iterator
    for (int i = 0; i < iterrationCount; i++)
    {
        printf("Hello world\n");
    }

    // int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int arraySize = 10;
    // int sum = 0;
    // for (int i = 0; i < arraySize; i++)
    // {
    //     sum += numbers[i];
    // }

    // printf("The sum of the items in the array is %d\n", sum);
    // return 0;

    // int countdown = 10;
    // while (countdown > 0)
    // {
    //     printf("%d\n", countdown);
    //     sleep(1);
    //     countdown--;
    // }

    // int number;
    // do
    // {
    //     printf("Enter a number betwenn 0 and 10: ");
    //     scanf("%d", &number);
    // } while (number < 0 || number > 10);
    // printf("You entered a valid number %d\n", number);
}