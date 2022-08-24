class Solution {
public:
    int getSum(int a, int b) {
        while(b){
            int tmp =a^b ; 
            b=(unsigned)(a&b)<<1;
            a=tmp;

        }
        return a;
    }
};


// 010
// 011
    
//  001
// 0100  
    
