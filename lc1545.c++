#include<bits/stdc++.h>
class Solution {
public:

    char findKthBit(int n, int k) {
        int rightmostSetBit = k & -k;
        
     
        bool isOddSetBits = ((k / rightmostSetBit) >> 1 & 1) == 1;
        
        
        bool isKOdd = (k & 1) == 1;
        
      
        return (char)((isOddSetBits ^ !isKOdd ? 1 : 0) + '0');
        
    }
};
