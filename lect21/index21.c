// #include <stdio.h>
// #include <string.h>
// int main()
// {
//
// }

#include <stdio.h>
#include <string.h>
int main()
{
    //     char s[] = "hello";
    //     int l = strlen(s);
    //     int vowel = 0;
    //     int consonant = 0;
    //     for (int i = 0; i < l; i++) {
    //         char c = s[i];
    //         if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
    //             c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
    //             vowel++;

    //         } else {
    //             consonant++;

    //         }

    //     }
    // printf("vowel=%d\n", vowel);
    // printf("consonant=%d\n", consonant);
    // }

    // char c[]="HELLO";
    // int l=strlen(c);

    // for(int i=0;i<l;i++){
    //     int count=0;
    //     for(int j=0;j<l;j++){
    //         if(c[i]==c[j] ){
    //             count++;
    //         }

    //     }
    //     printf("frequency of %c\n =%d\n",c[i],count);
    // }
    // }

    // char str[] = "hello";
    //     int ln = strlen(str);
    //      for (int i = 0; i < ln; i++)
    //      {
    //          int count = 0;
    //          for (int j = 0; j < i;   ){
    //               if (str[i] == str[j] )
    //           break;
    //           }
    //        }
    //        if (count == 0)
    //        {
    //             printf("%c", str[i]);
    //         }
    char str[] = " hello";
    int ln = strlen(str);
    char str2[] = "happy";
    int ln2 = strlen(str2);
    for (int i = 0; i < ln; i++)
    {
        for (int j = 0; j < ln2; j++)
        {

            if (str[i] = str2[j])
            {

                break;
            }
        }
        printf("%c", str[i]);
    }
}
