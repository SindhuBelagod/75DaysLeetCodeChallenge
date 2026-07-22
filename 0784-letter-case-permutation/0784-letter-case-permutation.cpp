class Solution {
public:
    vector<string>ans;
    void solve(string &s ,int index)
    {
        if(index==s.size())
        {
            ans.push_back(s);
            return;
        }
        if(isdigit(s[index]))
        {
            solve(s,index+1);
        }
        else
        {
            s[index]=tolower(s[index]);
            solve(s,index+1);

            s[index]=toupper(s[index]);
            solve(s,index+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        solve(s,0);
        return ans;
    }
};