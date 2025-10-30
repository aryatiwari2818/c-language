// recursion
#include <stdio.h>
/*void sum(int a){
    if(a==0) return ;
    sum(a-1);
    printf("%d",a);
}
int main(){
    sum(5);

}*/
/*void sum(int a){
    if(a==0) return ;

    printf("%d",a);
    sum(a-1);
}
int main(){
    sum(5);}*/
/*void sum( int s, int a)
{

    if (a == 0)
        return a;
        s = s + a;
    sum(s, a - 1);
    printf("%d", s);
}
int main()
{
    sum(0, 6);
}*/
/*void sum( int s, int a)
{

    if (a == 0)
        printf("sum=%d",s);
        s = s + a;
    sum(s, a - 1);
    printf("%d", s);
}
int main()
{
    sum(0, 5);
}*/
/*int sum(int a){
    if(a==0)return 0;
    return a+sum(a-1);

}
int main(){
    int data=sum(5);
    printf("%d",data);
}*/

/*int fac(int a){
    if(a==0|| a==1)return 1;
    return a*fac(a-1);

}
int main(){
    int data=fac(5);
    printf("%d",data);
}*/
/*int fib(int a){
    if(a==0 || a==1)return a;
    int s=fib(a-1);
    int s1=fib(a-2);
    int s3=s1+s;
   return s3 ;

}
int main(){
  int data= fib(5);
    printf("%d",data);
}*/
/*int power(int x,int n){
    if(n ==0) return 1;
    return x*power(x,n-1);

}
int main(){
    int data=power(2,3);
    printf("%d",data);
}*/
int sum(int arr[],int n){
    if(n==0) return 0;
    return arr[n-1]+sum(arr,n-1);
}
int main(){
   int arr[3]={1,2,3};
    int n=3;
    int data =sum(arr,n);
    printf("%d",data);
}


