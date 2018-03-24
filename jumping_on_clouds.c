#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int jump=0;
    for(int i=0;i<n;)
    {
        if(c[i+2]==0)
        {
            i=i+2;
            jump++;
        }
        else
        {
            jump++;
            i++;
        }
    }
    if(jump==1)printf("%d",jump);
    else
    printf("%d",jump-1);
    return 0;
}

