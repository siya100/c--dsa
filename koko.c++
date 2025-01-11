#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<climits>
int minEatingSpeed(std::vector<int>& piles, int h)
{   
   int maxi = INT_MIN; 
   int n = piles.size();
   for(int i=0;i<n;++i)
   {
    maxi = std::max(maxi,piles[i]);
   }
   int sum =0;
   int s = 1;
   int e = maxi;
   while(s<e)
   {
    int mid = (s+(e-s))/2;
    for(int i=0;i<n;++i)
    {
      sum+=std::ceil((double)piles[i]/(double)mid);
    }
    if(sum == h)
    {
        return mid;
    }
    else if (sum > h)
    {
        s=mid+1;
    }
    else
    {
        e=mid-1;
    }
    
   }
   return s;
}
int main()
{
    std::vector<int> piles={7,15,6,3};
    int h=8;
    int ans = minEatingSpeed(piles,h);
    std::cout << ans << std::endl;
    return 0;
   

}

