#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int minimumTime(int x_size, int* x) {
    //  Return the minimum time needed to visit all the houses.
	int temp1=x[0],temp2=x[0];
	for(int i=0;i<x_size;i++)
	{
	if(temp1<x[i])
		temp1=x[i];
	if(temp2>x[i])
		temp2=x[i];
	}
return temp1-temp2;
}

int main() {
    int t; 
    scanf("%i", &t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%i", &n);
        int *x = malloc(sizeof(int) * n);
        for (int x_i = 0; x_i < n; x_i++) {
           scanf("%i",&x[x_i]);
        }
        int result = minimumTime(n, x);
        printf("%d\n", result);
    }
    return 0;
}

