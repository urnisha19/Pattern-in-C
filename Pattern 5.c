 //Program to print hollow rhombus star pattern
#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter the number of row : ");
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=row-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=row; j++)
        {
            if(i==1 || i==row || j==1 || j==row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
