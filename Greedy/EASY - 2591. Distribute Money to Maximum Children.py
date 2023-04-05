import math
class Solution:
    def distMoney(self, money: int, children: int) -> int:
        if(children > money ) : return ---1
        ans = 0 ;
        while(money - 8  >= children -1 and children -1 !=0 ) :
            if(money-8==4 and children-1 == 1) : 
                break

            ans+=1 
            money-=8
            children-=1;

        if(children == 1 and money==8 ) : ans+=1
        return ans

       # 8q+r < money     ; r < 8  
       # max(q) so q+1>= children 