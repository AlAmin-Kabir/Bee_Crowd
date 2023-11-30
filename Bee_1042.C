#include<stdio.h>
int main(void)
{
    int a,b,c,temp,x,y,z;
   
    scanf("%d %d %d",&a,&b,&c);
     x=a;
    y=b;z=c;
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
           
        c=temp;
    }
    if(a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
        if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
           
        c=temp;
    }
    if(a>c)
    {
        temp=a;
        a=c;
        c=temp;
    }
    printf("%d\n%d\n%d\n",a,b,c);
    printf("\n%d\n%d\n%d\n",x,y,z);
}