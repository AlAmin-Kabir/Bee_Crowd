#include<stdio.h>
int main(){
    int a,temp=0,even=0,odd=0,pos=0,neg=0;
    for(int i=1;i<=5;i++){
        scanf("%d",&a);
        if(a%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
        if(a>0){
            pos=pos+1;
        }
        if(a<0){
            neg=neg+1;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    
}