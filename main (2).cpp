class Solution {
public:
    int search(vector<int>& nums, int target) {

       int n=nums.size();

       int l=0;
       int h=n-1;


       while(l<=h)
       {
         int m=(l+h)/2;

         if(nums[m]==target) return m;  //we found the target 

         else if(nums[m]>target) h=m-1;  //removing the right part

         else l=m+1; //removing or eliminating the left part
       }   

       return -1; //if we cant find the element return -1;
    }
};