#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b%2==0 && b>0){
            printf("EVEN POSITIVE\n");
        }
        if(b%2==0 && b<0){
            printf("EVEN NEGATIVE\n");
        }
        if(b%2!=0 && b>0){
            printf("ODD POSITIVE\n");
        }
        if(b%2!=0 && b<0){
            printf("ODD NEGATIVE\n");
        }
        if(b==0){
            printf("NULL\n");
        }

    }
    return 0;
}