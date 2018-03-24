#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* acidNaming(char* acid_name) {
    // Complete this function
    char str1[]="hydro";
    char str2[]="ic";
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(str1[i]==acid_name[i])
        {
            //printf("%c",acid_name[i]);
            flag=1;
        }
        else 
        {
            flag=0;
            break;
        }
    }
   // printf("%c",acid_name[strlen(acid_name)-2]);
    //printf("%d",flag);
    if(flag==1)
    {
        for(int i=strlen(acid_name)-2,j=0;i<strlen(acid_name);i++,j++)
        {
            if(str2[j]==acid_name[i])
            {
               // printf("%c",acid_name[i]);
                flag=2;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==0)
    {
    for(int i=strlen(acid_name)-2,j=0;i<strlen(acid_name);i++,j++)
        {
            if(str2[j]==acid_name[i])
            {
                //printf("%c",acid_name[i]);
                flag=3;
            }
            else
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==2)return "non-metal acid";
    else if(flag==3)return "polyatomic acid";
    return "not an acid";

    
        
        
}

int main() {
    int n; 
    scanf("%i", &n);
    for(int a0 = 0; a0 < n; a0++){
        char* acid_name = (char *)malloc(512000 * sizeof(char));
        scanf("%s", acid_name);
        int result_size;
        char* result = acidNaming(acid_name);
        printf("%s\n", result);
    }
    return 0;
}

