
#include<iostream>
#include<set>
void SetDemo()
{
    std::set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);
    for(int x : S)
    {
    
        std::cout << x <<  " " ;
    }
    std::cout << std::endl;
    auto it = S.find(-1);
    if(it == S.end())
    {
        std::cout << "not found" << std::endl;
    }

}
int main()
{
    SetDemo();
    return 0;
}