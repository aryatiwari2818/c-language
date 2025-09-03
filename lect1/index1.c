#include <stdio.h>
int main()
{git init
    int age = 20;
    float pi = 3.14;
    char grade = 'a';
    printf("hello\n");
    printf("age=%d\n", age);
    printf("pi=%f\n", pi);
    printf("grade=%c", grade);
    return 0;
}


 
git add .
git commit -m "msg"
//who are you
git config --global user.email "aryatiwari2818@gmail.com"  
 git config --global user.name "aryatiwari2818"  
 //then
 //reapet
 git add .
 git commit -m "msg:"
 //git url (link)  // git remote add origin https://github.com/aryatiwari2818/c-language.gitc
 git push
   git push --set-upstream origin master  