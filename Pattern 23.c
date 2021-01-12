//Program to print hollow diamond star pattern
#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter the number of row : ");
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(j=i; j<=row; j++)
        {
            printf("*");
        }

        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        for(j=i; j<=row; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        for(j=(2*i-2); j<(2*row-2); j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

