#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    char arr[n][20];
    for(int i=0;i<n;i++)
    {
        scanf("%s",arr[i]);
       // printf("%s\n",arr[i]);
    }
    int q;
    scanf("%d",&q);
    char s1[20];
    for(int i=0;i<q;i++)
    {
        int count=0;
       scanf("%s",s1);
       // printf("%s",s1);
        for(int j=0;j<n;j++)
        {
            if(strcmp(arr[j],s1)==0)count++;
        }
        printf("%d\n",count);
    }
    return 0;
}

