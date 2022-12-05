	#include <bits/stdc++.h>
	 
	using namespace std;
	#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	
//	long long dp[10001][10001] ;
	long long fn(int s, int c,int ct,int*f, int* r, int i){
//		if(dp[i][ct]) return dp[i][ct];
		long long ans = 0 ;
		if(i == s)return 0 ;
		if(ct<f[i]){
			ans += (c-ct)*r[i-1] + fn(s,c,c,f,r,i+1) +500  ;
		}
		else{
			while( ct>=f[i] ){
				ans += min(500+(c-ct)*r[i-1] + fn(s,c,max(ct-f[i],0),f,r,i+1),fn(s,c,max(ct-f[i],0),f,r,i+1)) ;
				ct-=f[i]; 
				
			}
			
		}
		
	return dp[i][ct] = ans;
	}
	
	void solve() {
	    // memset(dp,0 ,sizeof(dp));
	int s,c,r0;
	cin>>s>>c>>r0;
	int f[s];
	int r[s];
	for (int i=0 ; i<s;++i){
		cin>>f[i];
		cin>>r[i];
	}
	
	
	long long ans=r0*c + fn(s,c,c-f[0],f,r,1);
	
	cout<< ans<<endl;
	
	}
	
	
	
	 
	
	 
	int main() {
	 
	    fastInp
	    int t;
	    cin>>t;
	    while(t--){
	    solve();
	    }
	    return 0;
	}
	 
	 /*
	 
	 15* 240 +   
	 
	 
	 
	 1
	3 35 230
	15 240
	18 225
	24 240
	
	  B   C 
	 240
	
	
	
	 
	 */
	 
