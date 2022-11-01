    #include<iostream>
    #include<climits>
    using namespace std;
    int main ()
    {
        int N;
        cout<<"Enter the size of the array : ";
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        int mx=INT_MIN,currsum=0;
        for(int i=0;i<N;i++)
        {
            currsum+=arr[i];
            if(currsum<0)
            {
                currsum=0;
            }
            mx=max(mx,currsum);
        }
        cout<<"Maximum sum is : "<<mx;
    }