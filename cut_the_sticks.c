#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int minu(int ar[],int n)
{
    int temp=32767;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>0)
        if(ar[i]<temp)
            temp=ar[i];
    }
    return temp;
}
int main(){
    int n; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
      int  count=0;
    for(int i=0;i<n;i++)
    {
        int min=minu(arr,n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)count++;
          }
         if(count>0)printf("%d\n",count);
        for(int i=0;i<n;i++)
        {
            arr[i]-=min;
            //printf("%d",arr[i]);
        }
       
        
        
        count=0;
    }
    
    return 0;
}

