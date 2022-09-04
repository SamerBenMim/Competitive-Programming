class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(!num)return 1;
        if(num%10==0)return 0;
        return 1;
    }
};
