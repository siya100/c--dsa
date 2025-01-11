#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution
{
    public:
    static bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
    int maxMeetings(int start[], int end[], int n){
         int net = 1;
        std::vector<pair <int,int>> time;
        for(int i = 0;i<time.size();++i)
        {
            time.push_back(make_pair(start[i],end[i]));
        }
        sort(time.begin(),time.end(),sortbysec);
        int prev_end = time[0].second;
        for (int i =1;i<n;++i)
        {
        if(time[i].first > prev_end  )
        {
            net++;
            prev_end = time[i].second;
        }
        }
        return net;

       


    } 
    };
    int main()
    {
         int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];
        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
} 
    