#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double num,temp,sum=0.0,lastnum;
    cout<<"Enter the number to be checked"<<endl;
    cin>>num;
    temp=num;
    while(temp>1)
    {
        lastnum=(int)temp%10;
        temp=temp/10;
        sum=sum+pow(lastnum,3);

    }
    if(sum==num)
    cout<<"Amstrong number";
    else 
    cout<<"Not an Amstrong number";
    
}