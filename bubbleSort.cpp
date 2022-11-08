#include<iostream>
using namespace std;
/*void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
}
*/
int main()
{
    int n,arr[n];
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int counter=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   while(counter<n)
   {
    for(int i=0;i<(n-counter);i++)
    {
        if(arr[i]>arr[i+1])
        {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        //swap(arr[i],arr[i+1]);
        }
     }
     counter++;
   }
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
        
    return 0;

}
