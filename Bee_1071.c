#include<stdio.h>
int main(){
    int a,b,temp=0,count=0;
        scanf("%d %d",&a,&b);
    for(int i=a-1;i>b;i--){
        if(i%2!=0){
            temp=temp+i;
        }
        
    }
    printf("%d\n",temp);
    }