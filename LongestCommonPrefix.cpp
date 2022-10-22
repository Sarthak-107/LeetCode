class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pre=strs[0];
        if(strs.size()==1)
            return pre;
        for(int i=0;i<strs.size();i++)
        {
            for(int j=0;j<pre.length();j++)
            {
                if(strs[i][j]!=pre[j])
                    pre=strs[i].substr(0,j);
            }
        }
        return pre;
        
    }
};