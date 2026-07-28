class Solution {
public:
    void ps(vector<int>& nums,vector<int>&ans ,int i,vector<vector<int>>&subsets)
    {
        if(i==nums.size())
        {
            subsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        ps(nums,ans,i+1,subsets);
        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size()&&nums[idx]==nums[idx-1]) idx++;
        ps(nums,ans,idx,subsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>subsets;
        vector<int>ans;
        ps(nums,ans,0,subsets);
        return subsets;

    }
};