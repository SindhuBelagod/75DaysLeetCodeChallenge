class Solution {
public:
  int search(vector<int>& nums,int low,int high,int target)
  {
     low =0;
     high =nums.size()-1;
    int ans =nums.size();
    while(low<=high)
    {
        int mid =low+(high-low)/2;
        if(nums[mid]>=target)
        {
            ans =mid;
            high = mid-1;
        }
        else
        {
            low =mid+1;
        }
    }
    return ans;
  }
    int searchInsert(vector<int>& nums, int target) {
        return search(nums,0,nums.size()-1,target);
        
    }
};