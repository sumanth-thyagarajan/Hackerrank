#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    //int l1=2,l2,sum=0;
int result = 2,like = 2;
    for(int i = 2; i <= n; i++){
        like*=3;
        like = like/2;
        result+=like;
    }
    printf("%d\n",result);
    return 0;
}

