class Solution {
public:
    vector<vector<int>>ans ;
    vector<int>present;
    void subset(vector<int>nums,int index)
    {
        ans.push_back(present);

        for(int i=index;i<nums.size();i++)
        {
            present.push_back(nums[i]);

            subset(nums,i+1);

            present.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        subset(nums,0);
        return ans;
        
    }
};