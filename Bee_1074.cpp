#include<iostream>
using namespace std;
int main()
{   
    int t_c,i,num1,in=0,out=0;
    cin>>t_c;
    for(i=0;i<t_c;i++)
    {   
            cin>>num1;
        if(num1%2!=0 && num1!=0 && num1<0 )
            {
                cout<<"ODD NEGATIVE"<<'\n';
            }
        if(num1%2==0 && num1!=0 && num1<0 )
            {
                cout<<"EVEN NEGATIVE"<<'\n';
            }
        if(num1==0)
            {
                cout<<"NULL"<<'\n';
            }
        if(num1%2!=0 && num1!=0 && num1>0 )
            {
                cout<<"ODD POSITIVE"<<'\n';
            }
        if(num1%2==0 && num1!=0 && num1>0 )
            {
                cout<<"EVEN POSITIVE"<<'\n';
            }
    }
    return 0;
}