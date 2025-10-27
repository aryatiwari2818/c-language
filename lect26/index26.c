#include <stdio.h>
int main()
{
    /* int arr[] = {1, 2, 4,5};
     int sum = 0;

     int n = 5;
     int n2= sizeof(arr) / sizeof(arr[0]);
     int sum2 =n*(n+1)/2;
     for (int i = 0; i < n2; i++)
     {
         sum = sum + arr[i];
     }
     printf("missing num=%d", sum2 - sum);
     return sum2 - sum;
 }*/
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;
    int flag;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)

            printf("missing num=%d", i);
    }

    return -1;
}
