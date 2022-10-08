class Solution {
public:
int factorial(int n) {
      if(n == 0)
      return 1;
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}
 
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
 
    int numTeams(vector<int>& rating) {
        int n =rating.size();
        vector<int> v1(n,0);
        vector<int> v2(n,0);
        for(int i=0;i<n;++i){
            int nbr=0;
            for(int j =0 ;j<i;++j){
                if(rating[j]<rating[i])nbr++;  
            }
            v1[i]=nbr;
            nbr=0;
            for(int j =0;j<i;++j){
                if(rating[j]>rating[i])nbr++;  
            }
            v2[i]=nbr;
        }
        int ans=0;
        for(int i=0;i<n;++i){
            cout<<v1[i]<<" ";
        }
        for(int i=0;i<n;++i){
            for(int j=0;j<i;j++){
                if(rating[j]<rating[i])ans+=v1[j];
            }
            for(int j=0;j<i;j++){
               if(rating[j]>rating[i])ans+=v2[j];
            }
        }
        return ans;
    }
};
// N0_Wa

/*

  2 5 3 4 1
  0 1 1 2 0
  0 0 1 1 4  


2 5 3 4 1
0 1 1 





*/