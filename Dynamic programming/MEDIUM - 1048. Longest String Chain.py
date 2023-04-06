class Solution:
    def extension( self,s1 : str ,  s2 : str) :
        if len(s1)+1 != len(s2) : return False
        n : int = 0
        k : int = 0
        i : int = 0 
        while i < len(s1) :
            if s1[i] != s2[i+k] :
                k=1
                n+=1
                if n>1 : return False
                i-=1
            i+=1
        return True

    def compare(self,s1 : str ) :
        return len(s1) 
    def longestStrChain(self, words: List[str]) -> int:

        print(self.extension("x","ab"))
        words = sorted(words, key= self.compare ) 
        dp : List[int] = len(words)*[1]
        for i in range(len (words)) :
            for j in range (len (words)) :
                if(self.extension(words[j],words[i])) :
                    print(words[j]," : ",words[i])
                    dp[i] = max(dp[j]+1 , dp[i]) 
        print (dp)
        return max(dp)