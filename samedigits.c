#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Give 2 numbers\n");
    signed long a,b,c;
    scanf("%ld %ld",&a,&b);
    char flag=1;
    int psif,pl=0;
    while(flag && pl==0)
    {
        psif=a%10;
        c=b;
        if(a==0)
            pl=1;
        while(flag && c>0)
        {
            if(psif!=c%10)
               c=c/10;
            else
               c=-1;
               if(a/10==0)
                pl=2;
        }
        if(c==0)
            flag=0;
        a=a/10;
    }
