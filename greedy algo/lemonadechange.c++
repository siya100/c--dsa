#include<iostream>
bool change(int* arr,int size)
{
    int five=0,ten = 0;
    for (int i = 0;i<size;++i)
    {
      if(arr[i] == 5)
      {
        five+=1;
      }
      else if (arr[i] == 10)
      {
        if(five>=1)
    
      {
        five -= 1;
        ten+=1;
      }
      else
      {
        return false;
      }
      }
      else if(arr[i]==20)
      {
        if(five > 1 && ten >=1)
        {
            five -= 1;
            ten-= 1;
            std::cout << five;
        }
        else if (five >= 3)
        {
            five -= 3;
            std::cout << five;
        }
      
       
    return false;
      }
  }
  
    return true;
}
int main(){

    int arr[] = {5,5,10,10,20};
    std::cout << change(arr,5) << std::endl;
    return 0;
}