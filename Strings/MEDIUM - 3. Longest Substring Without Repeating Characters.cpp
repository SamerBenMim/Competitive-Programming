class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char ,int> mp ;
        int ans=0 ;
        int l=0;
        for(int i =0 ; i <s.length() ; ++i){
            if(mp.find(s[i]) != mp.end()){
                ans= max(ans,l);
                l=0;
                i = mp.find(s[i])->second ;
                mp.erase(mp.begin(),mp.end());
            }else{
                mp.insert({s[i],i}) ;
                l++; 
            }
            ans= max(ans,l);
        }
        return ans ;
    }
};
