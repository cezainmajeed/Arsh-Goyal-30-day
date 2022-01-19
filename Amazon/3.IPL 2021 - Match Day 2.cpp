    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int> v;
        deque<int> dq;
        for(int i=0;i<k;i++)
        {
            while(dq.empty()!=true && arr[i]>=arr[dq.back()])
            dq.pop_back();
            
            dq.push_back(i);
        }
        
        for(int i=k;i<n;i++)
        {
            v.push_back(arr[dq.front()]);
            
            while(dq.empty()!=true && dq.front()<=i-k)
            dq.pop_front();
            
            while(dq.empty()!=true && arr[i]>=arr[dq.back()])
            dq.pop_back();
            
            dq.push_back(i);
        }
        
        v.push_back(arr[dq.front()]);
        
        return v;
    }
