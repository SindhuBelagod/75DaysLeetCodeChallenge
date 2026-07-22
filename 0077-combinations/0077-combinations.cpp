class Solution {
public:
    vector<vector<int>>ans;
    vector<int>present;
    void solve(int n,int k,int start)
    {
        if(present.size()==k)
        {
            ans.push_back(present);
            return;
        }
        
        for(int i=start;i<=n;i++)
        {
            present.push_back(i);
            solve(n,k,i+1);
            present.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        solve(n,k,1);
        return ans;
    }
};