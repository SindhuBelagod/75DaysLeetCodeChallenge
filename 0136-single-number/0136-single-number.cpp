class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int>uni;
        for(int i=0;i<nums.size();i++)
        {
            if(uni.find(nums[i])==uni.end())
            {
                uni.insert(nums[i]);
            }
            else
            {
                uni.erase(nums[i]);
            }
        }
        return *uni.begin();
    }
};