#include<stdio.h>
int main()
{
    int i,evencount=0,oddcount=0,poscount=0,negcount=0,num;
        for (int i = 0; i < 5; ++i) {
{
        scanf("%d", &num);
}


        if (num % 2 == 0) 
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
        if (num > 0) 
        {
            poscount++;
        }
        else if(num<0)
        {
            negcount++;
        }

    }
    printf("%d valor(es) par(es)\n", evencount);
    printf("%d valor(es) impar(es)\n", oddcount);
    printf("%d valor(es) positivo(s)\n", poscount);
    printf("%d valor(es) negativo(s)\n", negcount);
    return 0;
}