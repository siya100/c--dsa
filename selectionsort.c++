#include<bits/stdc++.h>
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;++i)
    {
        int mini = i;
        for(int j=i+1;j<n;++j) 
        {
            if(arr[j] < arr[mini])
            {
                mini = j;
            }
    
            
        }

        
    

    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
}
 std::cout << "After selection sort: " << std::endl;
  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

}
int main() {
  int arr[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   std::cout << "Before selection sort: " << std::endl;
   for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "\n";
  selection_sort(arr, n);
  return 0;
}