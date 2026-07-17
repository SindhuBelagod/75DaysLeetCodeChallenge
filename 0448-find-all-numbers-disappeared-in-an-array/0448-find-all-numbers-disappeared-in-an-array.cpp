class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int ind=abs(nums[i])-1;
            if(nums[ind]>0)
            nums[ind]=-nums[ind];
        }
        vector<int>answer;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            answer.push_back(i+1);
        }
        return answer;
    }
};