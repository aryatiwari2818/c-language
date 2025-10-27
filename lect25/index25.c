#include <stdio.h>
//#include <string.h>
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
/*struct employee{
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
}*/
/*int main()
{

    int arr[5] = {1, 7, 3, 4, 5};
    int rmax[5];
    int lmax[5];
     lmax[0] = arr[0];
   
    
    int water = 0;
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > lmax[i - 1])
        {
            lmax[i] = arr[i];
        }
        else
        {
            lmax[i] = lmax[i - 1];
        }
    }
    rmax[4] = arr[4];
    for (int i = 3 ; i >= 0; i--)
    {
        if (arr[i] > rmax[i + 1])
        {
            rmax[i] = arr[i];
        }
        else
        {
            rmax[i] = rmax[i + 1];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        int minh;
        if (lmax[i] < rmax[i])
            minh = lmax[i];
        else
            minh = rmax[i];
        water = water + (minh - arr[i]);
    }
    printf("total water=%d", water);
    return 0;
}*/

