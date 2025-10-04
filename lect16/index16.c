#include <stdio.h>
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
/*void bubblesort(int arr[],int n){
    for(int i=n-1;i>0;i--){
int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;

                didswap=1;}}


       if(didswap==0){
            break;}
printf("one pass completed\n");
        }
}
int main(){
    int arr[]={1,82,73,4,45};
    int n=5;
bubblesort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);

    }
}*/
/*#include<stdio.h>
int sum(int *x,int *y){
    *x = 50;
    *y = 60;
    int c = (*x) + (*y);
    return c;
}*/
/*int sum(int *a, int *b) {
    *a = 20;
    *b = 10;
    int sum = (*a) + (*b);
    return sum;
}

int main() {
    int a = 5;
    int b = 10;
    int data = sum(&a, &b);

    printf("%d\n", data); 
    printf("%d\n", a + b); 

    return 0;
}*/
/*void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("%d %d\n", *x, *y);
}

int main() {
    int x = 10;
    int y = 20;
    swap(&x, &y);
    return 0;
}*/
/*int main() {
    int arr[4] = {1, 2, 3, 4};
    int *p = arr;

    for (int i = 0; i < 4; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}*/

/*int main() {
    int x = 10;
    int *p = &x;
    int **k = &p;

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("**k = %d\n", **k);

    return 0;
}*/
/*int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 5};
    int *p1 = arr1;
    int *p2 = arr2;

    int flag = 1;
    for (int i = 0; i < 5; i++) {
        if (*(p1 + i) != *(p2 + i)) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Arrays are equal\n");
    else
        printf("Arrays are not equal\n");

    return 0;
}*/
int main() {
    int arr[5] = {1, 2, 3, 45, 6};
    int *p = arr;

    printf("%d\n", *(p));
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));

    return 0;
}