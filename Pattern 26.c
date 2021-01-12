//Program to print the plus star pattern
#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of row : ");
    scanf("%d", &n);
    for(i=1; i<=(n * 2 - 1); i++)
    {
        if(i == n)
        {
            for(j=1; j<=(n * 2 - 1); j++)
            {
                printf("+");
            }
        }
        else
        {
            for(j=1; j<=n-1; j++)
            {
                printf(" ");
            }
            printf("+");
        }
        printf("\n");
    }
    return 0;
}
