#include<stdio.h>
int main(void)
{
    int a,b,c,d,x,y;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(c-a>0)
    {
        x=c-a;
    }
    else if(c-a<0)
    {
        x=24-a+c;
    }
    else if(c-a==0 && d-b>0)
    {
        x=c-a;
        y=d-b;
    }
    else if(c-a==0)
    {
        x=24;
    }
    if(d-b>=0)
    {
        y=d-b;
    }
    else if(d-b<0)
    { x=x-1;
        y=60-b+d;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
    }
