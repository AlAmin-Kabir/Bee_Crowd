#include<stdio.h>
int main(){
    int a,temp=0,count=0;
        scanf("%d",&a);
    int x=a+11;
    for(int i=a;i<=x;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}