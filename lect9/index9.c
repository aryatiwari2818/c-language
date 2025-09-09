#include <stdio.h>
int main()
{
    /*for (int i = 0; i < 3; i++)
         {
             for (int j = 0; j <= i; j++)
             {
                 printf("%d",j);
             }
             printf("\n");
         }}*/
    /*for(int i=0;i<3;i++)
    {


            for(int j=3;j>i;j--){

            printf("%d",j);}
         printf("\n");
    }
}*/
    /*for (int i = 0; i < 3; i++)
            {

                for (int j = 3; j > i; j--)
                {
                    printf(" ");
                }

                for (int k = 0; k <= i; k++)
                {
                    printf("%d",k);
                }
                printf("\n");
            }}*/
    /*char num='A';
            for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf(" ");
            }
            for (int k = 5; k > i; k--)
            {
                printf("%c",num++);
            }
            printf("\n");
        }
    }*/
    /*for(int i=0;i<3;i++){
    for(int j=3;j>i;j--){
        printf(" ");
    }
    for(int k=0;k<=i;k++){
        printf("*");
    }
    for(int l=1;l<=i;l++){
        printf("*");
    }
    printf("\n");
    }}*/
    /* int num = 65;

     for (int i = 0; i < 5; i++)
     {
         for (int j = 5; j > i; j--)
         {
             printf(" ");
         }
         for (int k = 0; k <= i; k++)
         {
             printf("%c", num++);
         }
         for (int l = 1; l <= i; l++)
         {
             printf("%c", num++);
         }
         printf("\n");
     }
 }*/
    /*int num=65;
    for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf(" ");
            }
            for (int k = 3; k > i; k--)
            {
                printf("%c", num++);
            }
            for (int l = 3; l>=i; l--)
            {
                printf("%c", num++);
            }
            printf("\n");
        }
    }*/

    /*for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf(" ");
            }
            for (int k = 3; k > i; k--)
            {
                printf("*");
            }
            for (int l = 3; l>=i; l--)
            {
                printf("*");
            }
            printf("\n");
        }
                }*/
    
    for (int i = 0; i < 4; i++)
    { int num=1;
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 3; k > i; k--)
        {
            printf("%d",num++);
        }
        for (int l =3 ; l >= i; l--)
        {
            printf("%d",num++);
        }
        printf("\n");
    }
}