class Solution {
public:
    int binarysearch(vector<int>& nums, int target,int start,int end)
    {
        if(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)  return mid;
            else if(nums[mid]<=target)
            {
               return binarysearch(nums,target,mid+1,end);

            }
            else
            {
            return binarysearch(nums,target,start,mid-1);
            }
           
        }
         return -1;
    }
    int search(vector<int>& nums, int target) {
       return binarysearch(nums,target,0,nums.size()-1);
    }
};