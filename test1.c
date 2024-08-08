#include <stdio.h>
typedef char* string;

int main()
{
    int a=15,b=5;
    int i=0;
    while(a>b)
    {
        i=i+1;
        printf("Number:%d\n",i);
        // if (a>b)continue;
        // else break;
        a=a-1;
        b=b+1;
        break;
        
    }



}