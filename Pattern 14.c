//Program to print reverse mirrored right triangle star pattern
#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter number of row: ");
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=row; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
