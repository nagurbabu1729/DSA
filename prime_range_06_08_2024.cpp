#include<bits/stdc++.h>
using namespace std;


void prime_range(int num1,int num2)
{
    int flag=0;
    for(int i=num1;i<=num2;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<< i  <<" ";
        }
    }
}

int main(){
    
    int num1=2,num2=19;
    prime_range(num1,num2);
    return 0;
}