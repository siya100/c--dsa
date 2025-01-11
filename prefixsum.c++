/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.*/
#include<bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums,int k)
{
    unordered_map<int,int> umap;
    int count = 0;
    int sum = 0;
    for(int i=0;i<nums.size();++i)
    {
        sum+=nums[i];
        if(sum==k)
        {
            count++;
        }
        if(umap.find(sum-k) != umap.end())
        {
            count+=umap[sum-k];
        }
        umap[sum]++;
    }
    return count;
}
/*prefix sum + hash map*/