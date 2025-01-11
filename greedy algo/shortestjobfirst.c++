#include<iostream>
#include<algorithm>
#include<vector>
int sjf(std::vector<int> &arr,int size)
{
    std::sort(arr.begin(),arr.end());
    int time = 0;
    int wait_time = 0;
    for(int i = 0;i<size-1;++i)
    {
        time += arr[i];
        wait_time += time;
        
    

    }
    
    return wait_time/5;


    
}
int main()
{ 
    std::vector<int> arr = {4,3,7,1,2};
    
    std::cout << sjf(arr,5);
    
    return 0;
}
