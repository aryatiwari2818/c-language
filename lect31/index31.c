#include <stdio.h>
#include<string.h>

/*int pal(int arr[],int i,int j){
    if(i>=j) return 1;
    if(arr[i]!=arr[j]) return 0;
    return pal(arr, i+1,j-1);

}
int main()
{
    int arr[]={1,2,1};
    int n=3;
    int i=0;
   int  j=n-1;
 int data=   pal(arr,i,j);
 printf("%d",data);

}*/

/*int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int key;
    printf("enter key=");
    scanf("%d",&key);
    int index=binarysearch(arr,n,key);
    if(index!=-1){
        printf("key found at index %d",index);
    }
    else{
        printf("key not found");
    }
}*/
/*int binarysearch(int arr[],int s,int l,int t){
    if(s>=l)return -1;
    int mid=(s+l)/2;
if(arr[mid]==t) return mid;
else if(t<arr[mid]){
    return  binarysearch( arr, mid +1,l,t);}
    else{
  return binarysearch(arr,s,mid-1,t);}
}
int main(){
    int arr[]={1,2,3,4,5};
    int s=0;
    int l=4;
    int mid=(l+s)/2;
    int t=3;

 int data=binarysearch(arr,s,l,t);
 printf("%d",data);
}*/
/*int sorted(int arr[], int i, int n)
{
    if (i >= n)
        return 1;
    if (arr[i] < arr[i + 1]){
        return 0;
    }
 return sorted(arr, i+1, n);

}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int i;
    int n=5;
    int data = sorted(arr, i, n);
    printf("%d", data);
}*/
int spal(char s[],int i,int j){
    if(i>=j) return 1;
    if(s[i]!=s[j]) return 0;
    return spal(s, i+1,j-1);

}
int main()
{
    char s[]="mom";
    int n=strlen(s);
    int i=0;
   int  j=n-1;
 int data=   spal(s,i,j);
 printf("%d",data);}
