#include <stdio.h>

////////////////////////////////PRINTING M////////////////////////////////

int main()
{
    int i, j, k, l, m;

    printf("\n\n");

    for (i = 0; i <= 11; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if(j==0)
            {
                printf("\t*");
            }
            else
            {
                printf("*");
            }
        }
        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (j = 0; j <= 2; j++)
        {
            printf("*");
        }
        for (m = 10; m >= i; m--)
        {
            printf("  ");
        }
        for (j = 0; j <= 2; j++)
        {
            printf("*");
        }
        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (j = 0; j <= 2; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\n\n");

    ////////////////////////////////PRINTING E////////////////////////////////

    for (i = 0; i <= 11; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if (i >= 0 && i < 2 || i > 4 && i < 7 || i >= 2 && i <= 4 && j == 1 || i > 6 && i <= 9 && j == 1 || i > 9 && i <= 11)
            {
                if(i > 4 && i < 7)
                {
                    printf("**");
                }
                else
                {
                    printf("***");
                }

            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\n\n");

    ////////////////////////////////PRINTING S////////////////////////////////

    for (i = 0; i <= 11; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if (i >= 0 && i < 2 || i > 4 && i < 7 || i >= 2 && i <= 4 && j == 1 || i > 6 && i <= 9 && j == 8 || i > 9 && i <= 11)
            {
                printf("***");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n\n");

    ////////////////////////////////PRINTING S////////////////////////////////

    for (i = 0; i <= 11; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if (i >= 0 && i < 2 || i > 4 && i < 7 || i >= 2 && i <= 4 && j == 1 || i > 6 && i <= 9 && j == 8 || i > 9 && i <= 11)
            {
                printf("***");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n\n");

    ////////////////////////////////PRINTING I////////////////////////////////

    for(i=1; i<=2; i++)
    {
        for(j=1; j<=24; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (i = 1; i <= 12; i++)
    {

        for (j = 1; j <= 3; j++)
        {
            if(j==1)
            {
                printf("          *");
            }
            else
                printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=2; i++)
    {
        for(j=1; j<=24; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
