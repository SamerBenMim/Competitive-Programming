#include <bits/stdc++.h>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int n,k;
void solve(){
cin>>n>>k;

map <int,long>mp;
map <int,long>::iterator itr;
long a;
for(int i =0 ; i < n ; ++i){
	cin>>a;
	 	if(mp.find(i%k) != mp.end()){
				mp.find(i%k)->second =  max(mp.find(i%k)->second ,a) ;

		}
	 	else{
					mp.insert({i%k,a});

		}
}
long long ans= 0 ;
for(itr = mp.begin() ; itr!=mp.end() ; ++itr){
ans += itr->second ;
}
cout<<ans<<"\n" ;
}
int main() {
	fastInp;
	//freopen("mootube.in", "r", stdin);
	//freopen("mootube.out", "w", stdout);
	int tc;
	cin >> tc;
	//int i=1;
	while(tc--){
		//cout <<"HELLO"<<endl;
		//cout << "Case #"<<i<<": " ;
		solve();
		//i++;
	}

	
	/*while(true){
		cin >> n >> progK;
		if(n==0 && progK==0){
			break;
		}
		solve();
	}*/
	
}
/*









*/

