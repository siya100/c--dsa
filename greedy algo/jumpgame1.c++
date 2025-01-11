#include<iostream>
#include<vector>
#include<algorithm>

bool jumpgame(std::vector<int> &arr,int size)
{
    int max_reach =  0;
    for(int i = 0;i<size-1;++i)
    {   
        if(max_reach < i)
        {
            return false;
            
        }
        
        
    max_reach = std::max(max_reach,i+arr[i]);
        
    }
        return true;
}

int main()
{
    std::vector<int> arr = {3,2,1,0,4};
    std::cout << jumpgame(arr,5);
    return 0;
}