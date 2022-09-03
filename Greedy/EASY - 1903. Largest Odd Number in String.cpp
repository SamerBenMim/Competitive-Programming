class Solution {
public
    string largestOddNumber(string num) {
        int index =  -1;
        for(int i = num.length()-1;i= 0;--i){
            if((num[i]-'0')%2 ==1){
            index = i;
            break;
            } 
        }
        coutindex;
        return num.substr(0,index+1);
    }
};
