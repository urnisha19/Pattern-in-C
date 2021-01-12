//Program to print half diamond star pattern
#include<stdio.h>
int main()
{
    int i, j, column, n;
    printf("Enter the number of column: ");
    scanf("%d",&n);
    column=1;
    for(i=1; i<n*2; i++)
    {
        for(j=1; j<=column; j++)
        {
            printf("*");
        }
        if(i < n)
        {
            column++;
        }
        else
        {
            column--;
        }
        printf("\n");
    }
    return 0;
}
