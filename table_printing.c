#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,i=1;
    printf("Enter the table of particular number ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d \n",n,i,n*i);
    }

    /*while (i<=10)
    {
         printf("%d * %d = %d \n",n,i,n*i);
         i++;
    }*/
    return 0;
}
