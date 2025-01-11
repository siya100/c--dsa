class Solution {
public:
    int sum(vector<int>& nums,int n)
    {
       int ss = 0;
       for(int i=0;i<nums.size()-1;++i)
       {
          ss+=ceil(double)(nums[i])/(double)n);
       }
       return ss;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
         int n = nums.size();
         if (n > threshold) return -1;
        int s = 1;
        int e = *max_element(nums.begin(),nums.end());
        while(s<=e)
        {
            int mid = (s+(e-s))/2;
            if(sum(nums,mid) <= threshold )
            {
                high = mid-1;
            }
            
            else
            {
                s=mid+1;
            }
        }
        return s;
        
    }
};