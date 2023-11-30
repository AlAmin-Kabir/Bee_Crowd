#include<stdio.h>
int main()
{
    float num,a,b;
    scanf("%f",&num);
    if(num>0 && num<=2000)
        {
            printf("Isento\n");
        }
    else
    {
        num=num-2000;
        if(num>0 && num-1000>=0)
            {
             a=1000*8/100;
            }
        else
        {   
            if(num>=0)
            printf("R$ %.2f\n",num*8/100);
        }
        num=num-1000;
        if(num>0 && num-1500>=0)
            {
                b=1500*18/100;
            }
        else
        {   if(num>=0)
            printf("R$ %.2f\n",a+num*18/100);
        }
        num=num-1500;
        if(num>=0)
        { 
            printf("R$ %.2f\n",a+b+num*28/100);
        }
    }

}