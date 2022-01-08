class Solution{
public:
    string decodedString(string s){
        // code here
        stack<int> st1;
        stack<string> st2;
        string ans;
        int num=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                num*=10;
                num+=(s[i]-'0');
            }
            else if(s[i]=='[')
            {
                st1.push(num);
                num=0;
                st2.push(ans);
                ans.clear();
            }
            else if(s[i]==']')
            {
                string temp=ans;
                int m=st1.top();
                st1.pop();
                for(int j=0;j<m-1;j++)
                {
                    ans+=temp;
                }
                ans=st2.top()+ans;
                st2.pop();
            }
            else
            {
                ans+=s[i];
            }
        }
        
        return ans;
    }
};
