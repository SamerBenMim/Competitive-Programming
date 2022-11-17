class Solution {
public
    vectorint diStringMatch(string s) {
        vectorint v;
        int n = s.length();
        int l =0 ;
        int r = n ; 
        for(int i = 0 ; i  n  ;++i){
            if(s[i]=='I'){
                v.push_back(l) ;
                l++;
            }

            else{       
                 v.push_back(r) ;
                r--;
            }
        }
         v.push_back(l) ;
        return v;
    }
};