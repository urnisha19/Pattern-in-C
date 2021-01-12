//Program to print hollow mirrored inverted right triangle star pattern
 #include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter number of row : ");
    scanf("%d", &row);
    for(i=1; i<=row; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=row; j++)
        {
            if(j==i || j==row || i==1)
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
