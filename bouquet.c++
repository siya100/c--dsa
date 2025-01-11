//tc = O(N*log(mmin-mmax+1))
//sc=O(1)
#include<iostream>
#include<vector>
#include<algorithm>
bool possible(std::vector<int> arr,int day,int k,int m)
{
    int cnt = 0;
    int noofb = 0;
    for(int i =0;i<arr.size()-1;++i)
    {
        if(arr[i] <= day)
        {
            cnt++;
        }
        else
        {
           noofb += cnt/k;
           cnt = 0;
        }
        noofb += cnt/k;
        if(noofb >= m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
 }

int roseGarden(std::vector<int> arr, int k, int m)
{
    long long val = m*1ll*k*1ll;
	if(val < arr.size())
	{
		return -1;
	}
	else
	{
      int s = *std::min_element(arr.begin(),arr.end());
      int e = *std::max_element(arr.begin(),arr.end());
      while(s<=e)
      {
        int mid = (s+(e-s))/2;
        if(possible(arr,mid,k,m))
        {
            
            e=mid-1;
        }
        else
        {
           s=mid+1;
        }



      }

      return s;
	}
    
}
int main()
{
    std::vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;
    int ans = roseGarden(arr, k, m);
    if (ans == -1)
        std::cout << "We cannot make m bouquets.\n";
    else
        std::cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}
