class Solution {
public:
    string longestPalindrome(string s) {
        int i=1,l=s.length(),mxlen=1,start=0;
        string st="";
        cout<<l<<" ";
        if(l==1)
            return s;
        while(i<=l-1){
                int ri=i+1,left=i-1;
                while(left>=0 and ri<=l and s[left]==s[ri]){
                    if(ri-left+1>=mxlen){
                        mxlen=ri-left+1;
                        start=left;
                    }
                    ri++;
                    left--;
                }
                ri=i;
                left=i-1;
                while(left>=0 and ri<=l and s[left]==s[ri]){
                    if(ri-left+1>=mxlen){
                        mxlen=ri-left+1;
                        start=left;
                    }
                    ri++;
                    left--;
            }
        i++;
        }
        for(int i=start;i<start+mxlen;i++)
            st.push_back(s[i]);
        return st;
    }
};