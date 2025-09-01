#include <stdio.h>
int main()
{
    /* printf("heheh");
 }*/
    /*int a;
    printf("enter a number=");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("monday");
        break;
    case 3:
        printf("tuesday");
        break;
    case 4:
    printf("wednesday");
        break;
        case 5:
        printf("thursday");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
    default:
        printf("invalid");
    }
}*/
    /*float a, b;
    int choice;
    printf("enter a=");
    scanf("%f", &a);
    printf("enter b=");
    scanf("%f", &b);
    printf("1 for add\n.2 for sub\n.3 for mul\n.4 for div\n.");
    printf("enter choice=");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("add=%f", a + b);
        break;
    case 2:
        printf("sub=%f", a - b);
        break;
    case 3:
        printf("mul=%f", a * b);
        break;
    case 4:
if("b!=0"){
    printf("div=%f", a / b);}
else printf("error");
    default:
        printf("invalid\n");
    }
}*/
    /* char color;
     printf("enter color =");
     scanf("%c", &color);
     switch (color)
     {
     case 'r':
         printf("stop!!");
         break;
     case 'y':
         printf("wait!!");
         break;
     case 'g':
         printf("go!!");
     default:
         printf("wrong input");
     }
 }*/
    /*int choice;
     float inr;
     printf("enter amount in inr=");
     scanf("%f", &inr);
     printf("1 for inr to usd\n 2 for inr to euro\n 3 for inr to yen\n");
     printf("enter your choice=\n");
     scanf("%d", &choice);
     switch (choice)
     {
     case 1:
         printf("usd=%f", inr*0.011 );
         break;
     case 2:
         printf("euro=%f", inr*0.09);
         break;
     case 3:
         printf("yen=%f", inr*1.66); break;
     default:
         printf("wrong input");
     }
 }*/
    /*int num;
    printf("enter a number=");
    scanf("%d", &num);
    switch (num % 2)
    {
    case 0:
        printf("even");
        break;
    case 1:
        printf("odd");
        break;
    default:
        printf("invalid");
    }
    return 0;
}*/
    /*char ch;
    printf("enter character=");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("vowel");
        break;
    default:
        printf("consonant");
    }
}*/
char grade;
printf("enter grade=");
scanf("%c",grade);
switch(grade){
case 'a':
printf("grade a,excellent");
break;
case 'b':
printf("grade b,good");
break;
case 'c':
printf("grade c, average");
break;
case 'd':
printf("grade d,below average");
break;
case 'e':
printf("grade e,poor");
break;
case 'f':
printf("grade f,fail");
break;
default:
printf("invalid");
}}
