#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    sort(s.begin(),s.end(),greater<int>());
    cout<<s;
}