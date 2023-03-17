#include <stdio.h>

/**
* Main - You should produce the exact same output as in the example
* 
* Description: using the main function
* Your program should return 0
*/
int main (void)
{
        char c;
        int i;
        long li;
        long long lli;
        float f;

        printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
        printf("Size of a long int: %ld byte(s)\n", sizeof(li));
        printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
        printf("Size of a float: %ld byte(s)\n", sizeof(f));
        return (0);
}
