class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        unordered_set<int>sett(nums.begin(),nums.end());
        for(int num : sett)
        {
            if(sett.find(num-1)==sett.end())
            {
                int current = num;
                int count =1;
                while(sett.find(current+1)!=sett.end())
                {
                    current++;
                    count++;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};