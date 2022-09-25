class Solution:
    def countPrimeSetBits(self, left: int, right: int) -> int:
        primes={2,3,5,7,11,13,17,19}
        return sum( bin(x).count('1') in primes
                   for x in range(left,right+1) )