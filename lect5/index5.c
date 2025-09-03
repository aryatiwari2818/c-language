#include <stdio.h>
int main()
{
   /* int sum = 0;
    int a;
    printf("enter num");
    scanf("%d", &a);
    while (a > 0)
    {
        int lastdig;
        lastdig = a % 10;
        sum = sum + lastdig;
        a = a / 10;
    }
    printf("sum=%d", sum);
}*/
int num;
int tab=0;
printf("enter num");
scanf("%d", &num);
for(int i=1;i<=10;i++)
{
    tab=num*i;
    printf("%d\n",tab);
}
}