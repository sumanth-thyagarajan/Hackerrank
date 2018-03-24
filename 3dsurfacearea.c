#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int surfaceArea(int A_size_rows, int A_size_cols, int A[][A_size_cols]) {
    // Complete this function
    int temp[A_size_rows][A_size_cols];
    for(int i=0;i<A_size_rows;i++)
    {
        for(int j=0;j<A_size_cols;j++)
        {
            temp[i][j]=A[i][j]*4+2;
        }
    }
    for(int i=0;i<A_size_rows;i++)
    {
        for(int j=0;j<A_size_cols;j++)
        {
          //  temp[i][j]=A[i][j]*4+2;
            //printf("%d",temp[i][j]);
           if(j-1>=0)
           {
               if(A[i][j]<A[i][j-1]){temp[i][j]-=A[i][j];}
               else {temp[i][j]-=A[i][j-1];}
           }
            if(j+1<=A_size_cols-1)
            {
                if(A[i][j]<A[i][j+1]){temp[i][j]-=A[i][j];}
                else {temp[i][j]-=A[i][j+1];}
            }
            if(i-1>=0)
            {
                if(A[i][j]<A[i-1][j]){temp[i][j]-=A[i][j];}
                else {temp[i][j]-=A[i-1][j];}
            }
             if(i+1<=A_size_rows-1)
             {
                 if(A[i][j]<A[i+1][j]){temp[i][j]-=A[i][j];}
                 else {temp[i][j]-=A[i+1][j];}
             }
            
        }
    }

    int sum=0;
    for(int i=0;i<A_size_rows;i++)
    {
        for(int j=0;j<A_size_cols;j++)
        {
            sum+=temp[i][j];
           // printf("(%d,%d) %d",i ,j,temp[i][j]);
            //temp[i][j]=A[i][j]*4+2;
        }
       // printf("\n");
    }
    
    return sum;
}

int main() {
    int H; 
    int W; 
    scanf("%i %i", &H, &W);
    int A[H][W];
    for (int A_i = 0; A_i < H; A_i++) {
       for (int A_j = 0; A_j < W; A_j++) {
      
          scanf("%i",&A[A_i][A_j]);
       }
    }
    int result = surfaceArea(H,W,A);
    printf("%d\n", result);
    return 0;
}

