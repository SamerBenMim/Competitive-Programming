class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v ;
        solution(n,n,"" ,v) ;
        return v;
    }
    
    
     void solution(int open ,int close , string  s ,  vector<string> &v){
         if(!open&&!close) v.push_back(s) ;
         else if(!open)  solution(open,close-1 ,s+")",v );
         else if(close>open && open ) {
           solution(open,close-1 ,s+")",v );
           solution(open-1,close,s+"(",v );
         }  
         else{
                        solution(open-1,close,s+"(",v );
         }
     }
    
};
