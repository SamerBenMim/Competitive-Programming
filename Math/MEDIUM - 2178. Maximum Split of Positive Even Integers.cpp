class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans ;
        if (finalSum%2==1) return ans ;
        long long i = 2;
        while(finalSum - 2*i>0 ){
            ans.push_back(i);
            finalSum -=i;
            i+=2;
        };
        
        ans.push_back(finalSum);
        return  ans;
    }
};

/*   2 4 6 16

100

2 4 6 8 10 12 14 16 



*/
