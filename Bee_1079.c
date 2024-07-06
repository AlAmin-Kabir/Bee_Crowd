#include<stdio.h>
int main(){
    int a;
    double b[3];
    scanf("%d",&a);
    for(int i=0;i<a;i++){

        for(int j=0;j<3;j++){
                scanf("%lf",&b[j]);
        }
        printf("%.1lf\n",(b[0]*2+b[1]*3+b[2]*5)/10);
    }
}