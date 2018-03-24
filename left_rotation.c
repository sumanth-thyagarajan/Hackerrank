#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* leftRotation(int a_size, int* a, int d, int *result_size) {
    // Compl0ete this function
    int i=0;
    int j=0;
   int  *tresult_size=(int*)malloc(sizeof(int)*a_size);
    for(j=0;j<a_size;j++)
    {
        i=(j+d)%a_size;
        tresult_size[j]=a[i];
        printf("%d ",tresult_size[j]);
    }
   // result_size[a_size]='\0';
    //result_size[j-1]='\0';
    result_size=tresult_size;
    return result_size;
}

int main() {
    int n; 
    int d; 
    scanf("%i %i", &n, &d);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int result_size;
    int* result = leftRotation(n,a, d, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");


    return 0;
}

