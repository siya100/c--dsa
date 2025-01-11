#include<iostream>
#include<vector>
#include "../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/bits/algorithmfwd.h"
#include "../../../../../MinGW/lib/gcc/mingw32/6.3.0/include/c++/parallel/algorithmfwd.h"
#include<algorithm>
int  assign(std::vector<int> &greed,std::vector<int> &size)
{
  std::sort(greed.begin(),greed.end());
  std::sort(size.begin(),size.end());
  int i = 0,j = 0,count = 0;
  while(i < greed.size() && j < size.size())
    {
      if(greed[i] <= size[j])
      {
        count++;
        i++;
        j++;
        
      }
      else{
        j++;
        
      }
      
    }
  return count;
}
  
int main()
{
std::vector <int> greed = {1,5,3,3,4};
std::vector <int> size = {4,2,1,2,1,3};
std::cout << assign(greed,size);
return 0;
}