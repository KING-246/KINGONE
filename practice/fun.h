#include <stdio.h>

int (*g_pfun)(int x,int y);

int Plat(void);
int Regfun(int(*pfun)(int x ,int y));
int max(int a,int b);
int min(int a,int b);

int Plat(void)
{
    int ret;
    int a=3;
    int b=9;

    ret=g_pfun(a,b);
    printf("the ret number is %d\n",ret);

    return 0;
}

int Regfun(int(*pfun)(int x ,int y))
{
    g_pfun=pfun;

    return 0;
}

int max(int a,int b)
{
    if(a>b)
        return a;
    else 
        return b;
}

int min(int a,int b)
{
    if(a<b)
        return a;
    else 
        return b;
}