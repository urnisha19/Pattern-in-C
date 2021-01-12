//Program to print mirrored half diamond star pattern
#include <stdio.h>
int main()
{
    int i, j, column;
    int star, space;
    printf("Enter number of column : ");
    scanf("%d", &column);
    space = column-i;
    star = 1;
    for(i=1; i<column*2; i++)
    {
        for(j=1; j<=space; j++)
            printf(" ");
        for(j=1; j<=star; j++)
            printf("*");
        printf("\n");

        if(i < column)
        {
            star++;
            space--;
        }
        else
        {
            star--;
            space++;
        }
    }

    return 0;
}
