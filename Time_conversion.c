#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s) {
        char *a;
        char *b;
        char *c;
        char am[]="AM";
        char pm[]="PM";
        char *pointer;
        pointer=strstr(s,pm);
      if(pointer!=NULL)
        {
           if(strcmp(s,"12:00:00PM")==0)
           {
            strcpy(s,"12:00:00");
           return s;
                
           }
            else if(strcmp(s,"12:00:00PM")>=0)
           {
            a=s;
            b=s;
            b++;
            c=s;
            c=c+8;
            *c='\0';
           return s;
           return s;
                
           }
            a=s;
            b=s;
            b++;
            *a=*a+1;
            *b=*b+2;
            c=s;
            c=c+8;
            *c='\0';
           return s;
        }
    else 
        {
            if(strcmp(s,"12:00:00AM")==0)
           {
             strcpy(s,"00:00:00");
             c=s;
            c=c+8;
            *c='\0';
           return s;   
           }
        else if(strcmp(s,"12:00:00AM")>0)
            {
            a=s;
            b=s;
            b++;
            *a=*a-1;
            *b=*b-2;
             c=s;
            c=c+8;
            *c='\0';
           return s;
        }
            c=s;
            c=c+8;
            *c='\0';
           return s;
    }
   
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}

