    string printMinNumberForPattern(string s){
        // code here 
        int co=0;
        int num=2;
        s='1'+s+'I';
        
        for(int i=1;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                reverse(s.begin()+i-co-1,s.begin()+i);
                co=0;
            }
            else
            {
                co++;
            }
            
            s[i]=num+'0';
            num++;
        }
        s.pop_back();
        
        return s;
    }
