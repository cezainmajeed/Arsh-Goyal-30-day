class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
        //code here
        unordered_map<string,vector<string>> mp;
        for(int i=0;i<str.size();i++)
        {
            string temp=str[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(str[i]);
        }
        
        vector<vector<string>> ans;
        
        for(auto itr=mp.begin();itr!=mp.end();itr++)
        {
            ans.push_back(itr->second);
        }
        
        return ans;
    }
};
