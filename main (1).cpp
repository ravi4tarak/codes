class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0; //initilizing the sum
        int maxi=INT_MIN;  //initilizing the maximum subarray sum;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            maxi=max(maxi, sum);
            if(sum<0)
            {
                maxi=max(maxi, sum);
                sum=0;
            }
            // when the sum become negative just store the max sum and restart the sum
            
        }
        return maxi;

        //t.C O(N)
        //S.C 0(1)
    }
};