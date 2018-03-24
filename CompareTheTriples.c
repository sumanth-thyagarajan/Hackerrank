#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    int *a=malloc(sizeof(int)*(*result_size));
        if(a0>b0)
             a[0]=a[0]+1;
        if(a1>b1)
             a[0]=a[0]+1;
        if(a2>b2)
             a[0]=a[0]+1;
        if(a0<b0)
             a[1]=a[1]+1;
        if(a1<b1)
             a[1]=a[1]+1;
        if(a2<b2)
             a[1]=a[1]+1;
        return a;
            
    // Complete this function
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size=2;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}

