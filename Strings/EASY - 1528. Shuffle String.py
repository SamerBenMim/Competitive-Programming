import numpy as np
class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        arr = ['a']*len(indices) 
        for i in range(0,len(indices)) :
            arr[indices[i]] = s[i]
        return  ''.join(arr)

