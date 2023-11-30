#include<iostream>
using namespace std;
int main()
{   
    int t_c,num1,i,in=0,out=0;
    cin>>t_c;
    for(i=0;i<t_c;i++)
    {
        cin>>num1;
        if(num1>=10 && num1<=20)
    {
        in++;
    }
    else
        {
            out++;
        }
    }

    cout<<in<<' '<<"in"<<'\n';
    cout<<out<<' '<<"out"<<'\n';
    return 0;
}