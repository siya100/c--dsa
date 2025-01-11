#include<bits/stdc++.h>
class Solution{
    public:
    std::vector<int> leaders(int arr[])
    {
        int n = arr.size();
        int mx = arr[n-1];
        std::vector<int> ans;
        ans.push_back(mx);
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<mx)
            {
                continue;
            }
            mx = arr[i];
            ans.push_back(mx);
        }
        std::reverse(ans.begin(),ans.end());
        return ans;

    }

};