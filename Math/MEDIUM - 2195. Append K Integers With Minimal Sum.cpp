class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
long long kk=k;
long long ans=kk*(kk+1)/2;
set s(nums.begin(),nums.end());
for(auto x:s)
{
if(x<=kk)
{
kk++;
ans+=kk;
ans-=x;
}
else break;
}
return ans;
    }
};
