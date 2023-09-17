#include <stdio.h>
#include <stdlib.h>
int main()
 {
    int i;
    float f;
    double d;
    char c;


    printf("Size of int: %lu bytes\n", sizeof(i));
    printf("Size of float: %lu bytes\n", sizeof(f));
    printf("Size of double: %lu bytes\n", sizeof(d));
    printf("Size of char: %lu byte\n", sizeof(c));

    return 0;
}
