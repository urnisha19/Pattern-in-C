//Program to print diamond star pattern
#include <stdio.h>
int main()
{
    int i, j, row;
    int star, space;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    star = 1;
    space = row - 1;
    for(i=1; i<row*2; i++)
    {
        for(j=1; j<=space; j++)
            printf(" ");
        for(j=1; j<star*2; j++)
            printf("*");
        printf("\n");

        if(i<row)
        {
            space--;
            star++;
        }
        else
        {
            space++;
            star--;
        }
    }
    return 0;
}
