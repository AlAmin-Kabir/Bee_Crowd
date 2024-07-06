#include<stdio.h>
int main(){
    int a,i,temp,x=1;
    scanf("%d",&temp);
    for(i=2;i<101;i++){
        scanf("%d",&a);
        if(a>temp){
            temp=a;
            x=i;
        }
    }
    printf("%d\n",temp);
    printf("%d\n",x);
}