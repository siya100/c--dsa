#include<bits/stdc++.h>
int func(std::vector<int> weights,int cap)
{
  int day = 1,load = 0;
  for(int i=0;i<weights.size();++i)
  {
    if(load+weights[i]> cap)
    {
        day++;
        load = weights[i];
    }
    else
    {
        load+=weights[i];
    }

  }
  return day;
}
int shipWithinDays(std::vector<int> weights,int days)
{
   int low = *std::max_element(weights.begin(),weights.end()) ;
   int high = std::accumulate(weights.begin(),weights.end(),0);
   while(low<=high)
   {
    int mid = low+(high-low)/2;
    int noofdays = func(weights,mid);
    if(noofdays <= days)
    {
        high = mid-1;
    }
    else
    {
      low = mid+1;
    }
   }
   return low;

}