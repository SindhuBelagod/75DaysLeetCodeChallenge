class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farr=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>farr)
            return false;

            farr=max(farr, i+nums[i]);
        }
        return true;

    }
};