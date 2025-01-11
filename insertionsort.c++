#include<bits/stdc++.h>
void insertion_sort(int arr[],int n)
{
    for(int i=0;i<n;++i)
    {
        int j=i;
        
            while(j>0 && arr[j-1] > arr[j])
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                j--;

            }
        

    }
     std::cout << "After Using insertion sort: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Before Using insertion Sort: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    insertion_sort(arr, n);
    return 0;
}
