class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        if(s.length()>t.length())return false ;
        while(i<s.length()&&j<t.length()){
            if(s[i]==t[j]){
                ++i;++j;
            }
            else {
                j++ ;
            }
        }
        
        
        if(i==s.length())return true;
        return false;
    }

