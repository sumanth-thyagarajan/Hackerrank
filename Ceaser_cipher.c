#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* caesarCipher(char* s, int k) {
    // Complete this function
     if(k>26)k=k%26;
    for(int i=0;i<strlen(s);i++)
    {
        if((s[i]>='a'&&s[i]+k<='z'))
           {
           // if(k>26)k=k%26;
               s[i]+=k;
           }
        else if((s[i]>='A'&&s[i]+k<='Z'))
        {
            //if(k>26)k=k%26;
            s[i]+=k;
        }
        
        else if(s[i]<65||(s[i]>90&&s[i]<97)||s[i]>122)
           {
               continue;
           }
         
        else if(s[i]+k>'z')
               {
              //      if(k>26)k=k%26;
                   s[i]=(s[i]+k-26);//%26;
               }
        else if(s[i]+k>'Z')
           {
            //if(k>26)k=k%26;
                   s[i]=(s[i]+k-26);
            //%26;
             }
       // printf("%d %d",'z','Z');
    }
           return s;
}

int main() {
    int n; 
    scanf("%i", &n);
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int k; 
    scanf("%i", &k);
    int result_size;
    char* result = caesarCipher(s, k);
    printf("%s\n", result);
    return 0;
}

