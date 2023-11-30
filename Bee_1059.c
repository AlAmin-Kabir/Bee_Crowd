#include<stdio.h>
int main()
{
    int i,num1,num2,a;
    scanf("%d %d", &num1,&num2);
    for (i = num1+1; i < num2; i++)
    {
        if (i % 2 != 0 )
        {

                a=a+i;
        }
        printf("%d\n", a);
    }
        return 0;

}
