#include<stdio.h>
int main()
{
    float sum=0,num;
    int i,count=0;
        for (int i = 0; i < 6; ++i) {

        scanf("%f", &num);

        if (num > 0) {
            count++;
            sum =sum+ num;
        }
    }
    sum=sum/count;
    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum);
    return 0;
}