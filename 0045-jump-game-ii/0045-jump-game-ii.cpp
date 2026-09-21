class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int current=0;
        int farr=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            farr=max(farr,i+nums[i]);
            if(i==current)
            {
                jumps++;
                current=farr;
            }
        }
        return jumps;
    }
};