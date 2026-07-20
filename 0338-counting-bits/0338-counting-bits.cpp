class Solution {
public:
    vector<int> countBits(int n) {
       
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++)
        {
             int sum=0;
             int num=i;
            while(num>0)
            {
                int rem = num%2;
                sum+=rem;
                num=num/2;
            }
            ans[i]=sum;
        }
        return ans;
    }
};