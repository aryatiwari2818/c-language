#include <stdio.h>
int main()
{
    /*int arr[]={1,3,3,4,4,5,5};
    int n=7;
    int i;
    int xr=0;
      for(int i=0;i<n;i++){
          xr=xr^arr[i];
      }
      printf("%d",xr);
      return xr;
  }*/
    /*int a=5;
    int b=3;
    int xr=0;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);}*/
    // left shift
    /*int a=5;
    int pos=1;
     int bit=a<<pos;

    printf("%d",bit);}*/
    // right shift
   /*int a = 5;
    int pos = 1;
    int bit = a >> pos;
    printf("%d", bit);
}*/
int arr[]={1,2,4,5};
int n=5;
int xr=0;
int xr1=0;
for(int i=1;i<=n;i++)
{
    xr=xr^i;
    //xr1=xr^i;
    for(int j=0;j<n-1;j++){
        xr1=xr1^arr[j];
    }
}
printf("%d",xr^xr1);}