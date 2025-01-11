
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int increment=1;
        int decrement=0;

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            {decrement=i;
            increment=0;
            break;
            }
            
        }
        if(increment)
        return true;
        cout<<decrement<<endl;
        increment=1;
        for(int i=decrement+1;i<nums.size();i++)
        if(nums[i]<nums[i-1])
        {increment=0;
        return false;
        }

        if(increment && nums[nums.size()-1]>nums[0])
        return false;

        return true;
    } 
};