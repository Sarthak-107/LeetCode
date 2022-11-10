#include<iostream>
using namespace std;
int main()
{
    int n,mx=INT16_MIN;
    int arr[5];
    //cout<<"Enter the size of the array"<<endl;
   // cin>>n;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
       mx=max(mx,arr[i]);
       cout<<mx<<" ";
        }
   
    }

