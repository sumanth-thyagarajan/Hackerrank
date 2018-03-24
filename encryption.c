#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int n=ceil(sqrt(strlen(s)));
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<strlen(s);j+=n)
        {
            printf("%c",s[j]);
        }
        printf(" ");
    }
    return 0;
}

