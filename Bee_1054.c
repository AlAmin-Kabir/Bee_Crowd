#include<stdio.h>
int main()
{
   float i,a;
   int count=0;
    for(i=0;i<=5;i++)
        {
            scanf("%f",&a);
            if(a>=0)
            {
                count=count+1;
            }
           
        }
         printf("%d valores positivos\n",count);
}