//z pattern through 2d array
#include<stdio.h>
int main(){
   //int n =5;
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
if(i==0||i==2){
printf("%d",arr[i][j]);
}
 else if(j==i){
    printf("%d",arr[i][j]);
 } 
  else{
   printf(" ");  
  }      
}
printf("\n");

}
}//no . of subarray of an array =n*(n+1)/2
