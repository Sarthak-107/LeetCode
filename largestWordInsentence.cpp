#include<iostream>
using namespace std;
int main()
{
    char arr[100];
    cin.getline(arr,100);
    cin.ignore();
    int i=0,count=0,ans=0,pos=-1;
    while(arr[i]!='\0')
    {
        i++;
         ans=max(count,ans);
         count++;A
        if(arr[i]==' ')
        {
          count=0;
        }
        
    }
    cout<<ans;
}