#include<stdio.h>
int main(){
    int a,temp=0,count=0;
        scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}