#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,arr_1[5];
    printf("Inter the Numbers : \n");


    for (i=0; i<5; i++)
    {
        scanf("%d",&arr_1[i]);
    }
    printf("The Numbers are :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n", arr_1[i]);
    }


    return 0;
}
