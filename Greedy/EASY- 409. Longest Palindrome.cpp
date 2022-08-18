class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        bool ok = false;
        map<char,int> mp;
        map<char,int>::iterator itr;
        for(int i =0;i<s.length();++i){
            if(mp.find(s[i])!=mp.end()) mp.find(s[i])->second++ ;
            else mp.insert({s[i],1});
        }
        for(itr = mp.begin(); itr!=mp.end() ;itr++){
            if( itr->second %2==0) ans+=itr->second;
            else{ ans+=itr->second-1;}
        }
        
        
        if(ans<s.length()) return ans+1;
        return ans;
    }
};