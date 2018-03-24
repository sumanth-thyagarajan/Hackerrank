#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    scanf("%d",&n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for(int i=0;i<n;i++)
    {
    unsigned int c;
        scanf("%u",&c);
    c=c^4294967295;
    printf("%u\n",c);
    }return 0;
}

