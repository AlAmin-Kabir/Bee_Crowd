#include<iostream>
using namespace std;
int main()
{   
    int num1,num2,i,sum=0;
    cin>>num1>>num2;
    for(i=num2;i<num1;i++)
    {
        if(num1>num2)
        {
                    if(i%2!=0 && i!=num1 && i!=num2 )
                    {
                        sum=sum+i;
                    }
        }
    }
    cout<<sum<<'\n';
}