#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n; 
    scanf("%i", &n);
    int m=0,diff;
    char n1[1000];
    int d1,j1;
    for(int a0 = 0; a0 < n; a0++){
        char* name = (char *)malloc(512000 * sizeof(char));
        int d; 
        int j; 
        scanf("%s %i %i", name, &d, &j);
        diff=j-d;
        if(m<diff)
        {
            m=diff;
            strcpy(n1,name);
            d1=d;
            j1=j;
        }
        else if(m==diff)
        {
            continue;
            if(d<d1)
            {
                strcpy(n1,name);
            }
        }
    }
    printf("%s %d",n1,m);
    // Write Your Code Here
    return 0;
}

