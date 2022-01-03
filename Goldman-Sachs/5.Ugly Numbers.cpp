class Solution{
public:	
	#define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    set<ull> st;
	    st.insert(1);
	    n--;
	    while(n--)
	    {
	        auto it=st.begin();
	        ull temp=*(it);
	        st.erase(it);
	        
	        st.insert(temp*2);
	        st.insert(temp*3);
	        st.insert(temp*5);
	    }
	    
	    return *(st.begin());
	}
};
