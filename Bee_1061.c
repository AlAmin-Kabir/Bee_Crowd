#include<stdio.h>
int main(){
    int d1,d2,h1,h2,m1,m2,s1,s2,time_in_sec,temp;
    scanf("Dia %d",&d1);
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    time_in_sec = (d2*86400+h2*3600+m2*60+s2)-(d1*86400+h1*3600+m1*60+s1);
    printf("%d dia(s)\n",time_in_sec/86400);
    time_in_sec=time_in_sec%86400;
    printf("%d hora(s)\n",time_in_sec/3600);
    time_in_sec=time_in_sec%3600;
    printf("%d minuto(s)\n",time_in_sec/60);
    time_in_sec=time_in_sec%60;
    printf("%d segundo(s)\n",time_in_sec);
    return 0;
}