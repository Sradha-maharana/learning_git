#include <stdio.h>

int main()
{
    int num = 10;

    printf("Value of num   = %d\n", num);

    /* &num gets the address of num. */
    printf("Address of num = %d\n", &num);

    printf("Address of num in hexadecimal = %x", &num);
printf("Value of num   = %d\n", *(&num));
    return 0; 
}