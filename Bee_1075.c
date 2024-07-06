#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    for(int i=2;i< 10000;){
        printf("%d\n",i);
        i=i+b;
    }
}