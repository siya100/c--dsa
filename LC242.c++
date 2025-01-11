#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        {
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s).find(t) != string::npos;
         
        
    }
};

/*better approach
Aspect	Approach 1 (Sorting)	Approach 2 (Frequency Counting)
Time Complexity	
𝑂                                        O(n)
(nlogn)
𝑛
log
⁡
                                        

Space Complexity	                    O(1) (fixed size vector)
𝑂(1)  (in-place sorting)

Efficiency	
Slower for large 

	                                        Faster for large 

Implementation Ease	
Easier to implement	                      Slightly more complex
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.length();
        int n2=t.length();
        if(n1!=n2)
        return false;
        vector<int>s1(26,0);
        vector<int>t1(26,0);
        for(int i=0;i<n1;i++)
        {
            s1[s[i]-'a']++;
            t1[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(s1[i]!=t1[i])
            return false;
        }
        return true;
        
    }
};