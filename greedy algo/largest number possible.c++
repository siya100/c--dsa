 int findPair(int n, int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int first=0;
        int moving=1;
        while(moving<n){
            if(first==moving) moving++;
            else if(  abs(arr[first]-arr[moving])<x  ) moving++;
            else if(  abs(arr[first]-arr[moving])>x  ) first++;
            else return 1;
        }
        return -1;
    }    
    //sliding window approach               