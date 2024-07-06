#include<stdio.h>
int main(){
    int a,b;
    for(int i=0;i<1;i++){
        scanf("%d %d",&a,&b);
        if(a>0 && b>0){
            printf("primeiro\n");
            i--;
        }
        if(a>0 && b<0){
            printf("quarto\n");
            i--;
        }
        if(a<0 && b>0){
            printf("segundo\n");
            i--;
        }
        if(a<0 && b<0){
            printf("terceiro\n");
            i--;
        }
        if(a==0 || b==0){
            i++;
        }
    }
}