class Solution {
public:
    bool isValid(string s) {
        stack<char> arr;
        for(int i=0;i<s.length();i++)
        { 
            if(arr.empty())
            {
                arr.push(s[i]);
                continue;
            }
            if(s[i]=='}'&&arr.top()=='{')
                arr.pop();
            else if(s[i]==']'&&arr.top()=='[')
                arr.pop();
            else if(s[i]==')'&&arr.top()=='(')
                arr.pop();
            else
                arr.push(s[i]);
            
        }
        return arr.empty();
    }
};