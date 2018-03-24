#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int saveThePrisoner(int n, int m, int s){
    // Complete this function
    int temp;
    temp=s;
  //  for(int i=0;i<m;i++)
  //  {
   //     temp=(temp+1)%n;
  //  }
    if(!((m+s-1)%n))return n;
        return (m+s-1)%n;
}

int main() {
    int t; 
    scanf("%d", &t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int m; 
        int s; 
        scanf("%d %d %d", &n, &m, &s);
        int result = saveThePrisoner(n, m, s);
        printf("%d\n", result);
    }
    return 0;
}

