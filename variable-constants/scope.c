#include <stdio.h>

int global_num = 0; // This is global scope, can be accessed from everywhere

int test();

int main()
{
    int local_num = 1; // This is local scoped, can be accessed inside main
    if (1 == 1)
    {
        int only_inside_if = 2; // This is also local scope can be accessed inside if
        printf("%i\n", only_inside_if);
        printf("%i\n", local_num);
        printf("%i\n", global_num);
    }

    // printf("%i\n", only_inside_if); // Not allowed to access here
    // test();
    // test();
    return 0;
}

// int test()
// {
//     static int test = 0;
//     test++;
//     printf("%i\n", test);
// }