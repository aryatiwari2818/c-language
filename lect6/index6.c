#include <stdio.h>
int main()
{
    /*int rev = 0;
    int num;
    printf("enter num=");
    scanf("%d", num);
    while (num != 0)
    {
        int lastdig = num % 10;
        rev = rev * 10 + lastdig;
        num = num / 10;

    }
printf("reversed digit=%d", rev);
}*/
    /*int num;
    int fact = 1;
    int i = 1;
    printf("enter num=");
    scanf("%d", &num);
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("factorial=%d", fact);
}*/
    /*int rev = 0;
    int num;

    printf("enter num=");
    scanf("%d", &num);
    int original = num;
    while (num != 0)
    {
        int lastdig = num % 10;
        rev = rev * 10 + lastdig;
        num = num / 10;
    }
    if (original == rev)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
        return 0;
    }*/

    int num;
    int count = 0;
    printf("enter num");
    scanf("%d", &num);
    if (num < 2)
    {
        printf("not prime");
    }
    else
    {
        for (int i = 1; i <= num; i++)
            
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("prime");
    }

    else
    {
        printf("not prime");
    }
}