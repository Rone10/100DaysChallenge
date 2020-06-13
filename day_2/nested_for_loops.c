#include <stdio.h>
#include <limits.h>

void main()
{
    // print a square
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    };
    printf("\n");
    // print a right triangle
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    };
    printf("\n");
    //////////////////////////////////
    // print an  inverted right triangle
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    };
    printf("\n");
    // print an isosceles triangle
    int n = 5, i, j, k, c = 10;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (c / 2) - i; j++)
        {
            printf(" ");
        };
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        };
        printf("\n");
    }
    printf("\n");
}