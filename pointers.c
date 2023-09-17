#include <stdio.h>
#include <stdlib.h>

int main()
{
int i = 16;
int *ptr=&i;

printf ("Value of i is %d\n", i);
printf("Address of i is %p\n", i);
printf("Address of ptr is %p\n", ptr);
printf("Value of ptr: %d\n", *ptr);
return 0;
}
