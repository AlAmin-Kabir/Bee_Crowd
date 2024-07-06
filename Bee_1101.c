#include<stdio.h>
int main(){
    int a,b,temp=0;
    int i=0,j;
    while(i<3){
            scanf("%d %d",&a,&b);
            if(b>0 && a>b){
            for(j=b;j<=a;j++){
                printf("%d ",j);
                temp=temp+j;
            }
            printf("Sum=%d\n",temp);
            temp=0;
            }
            if(a>0 && a<b){
            for(j=a;j<=b;j++){
                printf("%d ",j);
                temp=temp+j;
            }
            printf("Sum=%d\n",temp);
            temp=0;
            }     
            i++;     
    }
}
            
                
        
    