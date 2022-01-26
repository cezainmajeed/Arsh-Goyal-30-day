class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;
        deque<int> dq;
        int i;
        for(i=0;i<k;i++)
        {
            while(dq.empty()!=true && arr[i]>=arr[dq.back()])
            dq.pop_back();
            
            dq.push_back(i);
        }
        for(i=k;i<n;i++)
        {
            ans.push_back(arr[dq.front()]);
            
            while(dq.empty()!=true && dq.front()<=i-k)
            dq.pop_front();
            
            while(dq.empty()!=true && arr[i]>=arr[dq.back()])
            dq.pop_back();
            
            dq.push_back(i);
        }
        ans.push_back(arr[dq.front()]);
        return ans;
    }
};
