#include<stdio.h>
int main(){
    int test,a,b,temp=0,k;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
            scanf("%d %d",&a,&b);
            if(a<b){
                for(k=a+1;k<b;k++){
                if(k%2!=0){
                    temp=temp+k;
                }
                }
            printf("%d\n",temp);
            temp=0;
            }
            else if(a>b){
                for(k=b+1;k<a;k++){
                if(k%2!=0){
                    temp=temp+k;
                }
            }
            printf("%d\n",temp);
            temp=0;
            }
            if(a==b){
                printf("0\n",temp);
                temp=0;
                }
            }
            }


