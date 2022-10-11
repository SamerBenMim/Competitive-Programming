#include <bits/stdc++.h>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
 
void solve(){
int n;
cin>>n;
long long sum=0;
int t[n];
for(int i=0 ; i< n ;++i){
	cin>>t[i];
	sum+=t[i];
}
		int mini = INT_MAX;
for( int i=n ; i>=2 ; --i){
	
	if(sum%i==0){
//	cout<<" i = "<<i<<endl;
		int tmp=0;
		int s =0;
		int ans=0;
		int res = 0;
		for(int j= 0;j<n;++j){
			tmp+= t[j];
			s+=t[j];
			ans++;
			if(tmp==sum/i){
				tmp= 0 ;
//				cout<<"ans: " <<ans<<"for j : "<<j<<endl;
				res = max(res,ans); 
				ans=0;
			} 
			else if(tmp>sum/i){ans = 0 ;break;}  
		}
//		cout<<res<<"fffffffffffff"<<endl;
		if(s==sum&& tmp==0) {
			mini=min(mini,res) ;
//			cout<<mini<<" m "<<endl;
		}
	}
}
	if(mini>INT_MAX-1)mini=n;
	cout<<mini<<endl;
//	cout<<n<<endl;
 
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
 
1 2 3 4 5 6 7 
7 6 5 3 4 2 1
 
 
 
55 45 30 30 40 100
 
55 45 
2
*/