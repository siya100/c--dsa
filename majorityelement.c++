/* THIS IS WHAT I THOUGHT


#include<bits/stdc++.h>
int majorityElement(std::vector<int>& nums) {
        std::map<int,int> mp;
        for(int i=0;i<nums.size();++i)
        {
            mp[nums[i]]==1;
            if(mp.find(nums[i]) != mp.end())
            {
                mp[nums[i]]++;
            }
        }
        auto maxElement = std::max_element(mp.begin(),mp.end());
        if(maxElement == (floor(nums.size()/2)));
        {
            std::cout << mp[maxElement] << std::endl;
        }
        
 
 
 
        */


       /*CORRECT IMPLEMENTATION OF WHAT I THOUGHT BUT HAS O(N)
       SPACE COMPLEXITY WHICH IS NOT REQUIRED*/
#include <bits/stdc++.h>
int majorityElement(std::vector<int>& nums) {
    std::map<int, int> mp;

    for (int num : nums) {
        mp[num]++;
    }

    int majorityCount = nums.size() / 2;
    for (const auto& pair : mp) {
        if (pair.second > majorityCount) {
            return pair.first;
        }
    }

    return 0;

    }



    /*MOORE'S VOTING ALGORITHM*/
    int majorityElement(std::vector<int>& nums) {
    int ans = 0;
    int cnt = 0;
    for( auto num:nums)
    {
        if(cnt == 0)
        {
            ans = num;
        }
        if(num==ans)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    return ans;

    }







