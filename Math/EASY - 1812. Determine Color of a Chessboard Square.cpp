class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x= coordinates[0] - 'a' +1 ;
        int y = coordinates[1] - '0' ;
        bool ans;
        (y%2==0) ? ((x%2 == 0)? ans= 0 : ans= 1)  :(x%2==0) ? ans= 1 :ans= 0 ;
        
        return ans;
    }
};
