#include <stdio.h>
int main()
{
    /* int arr[5]={1,0,7,0,9};
     int n=5;
     int i;
     int n2;
     int temp[5];
     for(int i=0;i<n;i++){
         if(arr[i]!=0){
             temp[i]=arr[i];
         }
     }

 for(int i=n2;i<n;i++){
     temp[i]=0;

 }

     printf("new=%d",temp[i]);

 }*/
    /*int j=0;
    int arr[]={1,0,5,0,9};
    for(int i=0;i<5;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }}
        for(int i=0;i<5;i++){
            printf("%d",arr[i]);
        }
    }*/
    int arr[] = {7, 1, 5, 3, 6, 4};
 
    int mini = arr[0];
  
    int profit=0;
    for (int i = 1; i < 6; i++)
    {
        int cost = arr[i] - mini;
       if(profit<cost){
                profit=cost;

            }
        
      
        if (arr[i] < mini)
        {
             mini=arr[i];
        }
        
         
            
    }
    printf("%d", profit);
    return 0;
}