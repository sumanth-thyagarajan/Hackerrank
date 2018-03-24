#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    int temp=100;
    scanf("%d %d",&n,&k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int count=0;
    for(int i=0;i<n;i=(i+k)%n)
    { if(i==0)
        {count++;
         
            }
       
        if(count==2)break;
        if(c[i]==1)
            temp=temp-2;
        temp--;
     //printf("\n temp %d i %d",temp,i);
        
    }
    printf("%d",temp);
    return 0;
}

