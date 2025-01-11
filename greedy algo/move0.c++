#include<bits/stdc++.h>
using namespace std;
void moveZeroes(std::vector<int>& nums)
{
    if(nums.size()==1)
    {
        std::cout << nums[0] << std::endl;
    
    }
    else
    {

    
    for(int i=0;i<nums.size();++i)
    {
       if(nums[i] == 0 && nums[i+1] != 0) 
       {
           swap(nums[i],nums[i+1]);
       }
    }
    for(int i:nums)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    }

}
int main()
{
    vector<int>  nums = {0,1,0,3,12};
    moveZeroes(nums);
}