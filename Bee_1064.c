#include<stdio.h>
int main(){
    double a,temp=0,count=0;
    for(int i=1;i<=6;i++){
        scanf("%lf",&a);
        if(a>0){
            count=count+1;
            temp=temp+a;
        }
    }
    double avg=temp/count;
    printf("%.0lf valores positivos\n",count);
    printf("%.1lf\n",avg);
}