#include <stdio.h>

int main()
{
    /* VARIABLE DECLARATION & INITIALIZATION
        -------------------------------------
        Pattern: <data_type> <identifier> [= value];
    */

    // Variable
    int num = 0;
    float percentage = 80.01;
    char letter = 'a';
    char arrayletters[5] = {'a', 'b', 'c', 'd', 'e'};
    char stringletters[5] = "abcde";
    int numArray[3] = {0, 1, 2};
    unsigned int unum = 10;
    long int lnum = 10;
    double epsilion = 1.345;
    int test, test1, test2; // Multiple declaration in same line

    // Constants or literals: 0 is a integer constant,
    // 'c' is a character constant,
    // 1.445 is a floating point constant
    // "test" is a string constant

    // Variables value can change
    num = 10;
    // Variable names or identifiers have to follow rules
    // Varaible name cannot start with digit, cannot contain whitespace, and special characters like !, #, %, /
    // Variable names cannot be keyword
    // 1test is invalid, _test is valid, int is invalid, Int is valid

    printf("%i\n", num);
    //  printf("%li\n", sizeof(letter));
    // printf("%i\n", letter);
}