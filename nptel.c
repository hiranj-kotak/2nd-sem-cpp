#include <stdio.h>

int main()
{
    int rows;

    scanf("%d", &rows); // Number if rows of the triangle is taken from test case
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < rows; j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (i == rows - 1)
            {
                printf("*");
            }
            else if (j == i || j == 0)
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