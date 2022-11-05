#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s1;
    int alphacount[26];
    int mx=0;
    char x='a';
    cout<<"Enter the string : ";
    getline(cin,s1);
    for(int i=0;i<26;i++)
    {
        alphacount[i]=0;
    }
    for(int i=0;i<s1.size();i++)
    {
        alphacount[s1[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(mx<alphacount[i])
        {
            mx=alphacount[i];
            x='a'+i;
        }
    }
    cout<<mx<<endl;
    cout<<x;
    return 0;
}