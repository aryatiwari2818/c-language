#include<stdio.h>
int main()
{
/* int arr[5]={1,2,3,4,5};
    int k=3; 
    int n=sizeof(arr)/sizeof(arr[0]);
int windowsum=0;
for(int i=0;i<k;i++){
 windowsum=windowsum+arr[i];
}

int maxsum=windowsum;
for(int j=k;j<n;j++){
    windowsum=windowsum+arr[j]-arr[j-k];}
if(windowsum>maxsum){
    maxsum=windowsum;
}
printf("maxsum=%d\n",maxsum);

}*/
/*int arr[5]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
int k=3;
for(int i=k-n;i<n;i++){
    for(int j=k+n;j<n;j++){
        if
        }
    }
}*/
int arr[5]={1,2,3,4,5};
int maxsum=__WINT_MIN__;
int k=3;
int n=5;
for(int i=0;i<=n-k;i++){
int currentsum=0;
for(int j=i;j<i+k;j++){
    currentsum=currentsum+arr[j];
}

if(currentsum>maxsum){
 maxsum=currentsum;
}}
printf("maxsum=%d",maxsum);

return maxsum;
}