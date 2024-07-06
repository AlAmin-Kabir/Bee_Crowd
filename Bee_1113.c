#include<stdio.h>
int main(){
    int a,b,temp=0;
    int i=0,j;
    while(i<4){
            scanf("%d %d",&a,&b);
            if(b>0 && a>b){
                printf("Decrescente\n");
            }
            
            if(a>0 && a<b){
                printf("Crescente\n");
            }
            if(a==b){
            }
            if(b<0 && a>b){
                printf("Crescente\n");
            }
            
            if(a<0 && a<b){
                printf("Decrescente\n");
            }
            if(a==b){    
            i++;   
    }  
    }
}
            
                
        
    