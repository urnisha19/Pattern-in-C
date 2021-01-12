//Program to print hollow right triangle star pattern
#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter number of row: ");
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i || i==row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
