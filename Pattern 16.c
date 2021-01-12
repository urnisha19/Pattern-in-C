//Program to print pyramid star pattern
#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter number of row : ");
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=row-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
