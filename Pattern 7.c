//Program to print hollow mirrored rhombus star pattern series
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
        for(j=1; j<=row; j++)
        {
            if(i==1 || i==row  || j==1|| j==row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
