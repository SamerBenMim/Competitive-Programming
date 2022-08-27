class Solution {
public:
    int addDigits(int num) {
         int tmp;
        while(num>=10){
             tmp= num % 10 ;
             num/=10;
            num+=tmp;
        }
       
        return  num;
    }
};
