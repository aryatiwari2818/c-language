#include <stdio.h>
int main()
{
    /* for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             printf("%d",i);
         }
         printf("\n");
     }
 }*/
    // patern printing
    // square
    /*#include <stdio.h>
    int main()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }*/
    // upper right triangle

    /* for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j <= i; j++)
         {
             printf("*");
         }
         printf("\n");
     }
 }*/
    // lower right triangle
    /* for (int i = 0; i < 3; i++)
     {
         for (int j = 3; j > i; j--)
         {
             printf("*");
         }
         printf("\n");
     }
 }*/
    // upper left triangle
    for (int i = 0; i < 3; i++)
        {

            for (int j = 3; j > i; j--) 
            {
                printf(" ");
            }

            for (int k = 0; k <= i; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    // lower left triangle
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 3; k > i; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}