class Solution:
    def minimumSum(self, num: int) -> int:
        arr = []
        while(num>0) :
            arr.append(num%10)
            num//=10
        arr = sorted(arr,reverse= True)
        ans=0
        e=0
        for i in range(0,len(arr)-1,2):
            ans+=(arr[i] + arr[i+1] )*10**e
            if(i%2==0):
                e+=1 
        return ans
        #9400