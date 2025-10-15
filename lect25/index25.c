#include<stdio.h>
#include<string.h>
/*struct student{
    char name[20];
    int rollno;
    int marks;

};
int main(){
    struct student s1[5];
   
    for(int i=0;i<5;i++){
        printf("enter rollno=");
        scanf("%d",&s1[i].rollno);
        printf("enter name=");
        scanf("%s",s1[i].name);
        printf("enter marks=");
        scanf("%d",&s1[i].marks);
    }
printf("details of students are\n");
    for(int i=0;i<5;i++){
        printf("rollno=%d \n name=%s\n marks=%d\n",s1[i].rollno,s1[i].name,s1[i].marks);
    }
    return 0;


}*/
struct employee{
    int id;
    char name[20];
    float salary;
   
};
int main(){
    struct employee e1[5];
    for(int i=0;i<5;i++){
        printf("enter id=");
        scanf("%d",&e1[i].id);
        printf("enter name=");
        scanf("%s",e1[i].name);
        printf("enter salary=");
        scanf("%f",&e1[i].salary);
    }
    printf("details of employees are\n");
    for(int i=0;i<5;i++){
        printf("id=%d \n name=%s\n salary=%f\n",e1[i].id,e1[i].name,e1[i].salary);
    }
    return 0;
}



