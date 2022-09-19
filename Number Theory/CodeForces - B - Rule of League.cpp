#include <bits/stdc++.h>
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
int n,x,y;
void solve(){
	cin >> n >> x >>y;
	if(x==0 && y==0) {
		cout << -1 << "\n";
		return;
	}
	if(x!=0&&y!=0){
		cout << -1 << "\n";
		return;
	}
	
	if((n-1)%max(x,y)!=0){
		cout <<-1<< "\n";
		return;
	}
	n--;
	vector<int> res(n);
	vector<int> vec(n);
	if(x==0){
		swap(x,y);
	}
	for(int i=0;i<n;i++){
		vec[i]=x;
	}
	int currentPlayer=0;
	bool test=true;
	for(int i=0;i<n;i++){
		
		if(vec[currentPlayer]==0){
			currentPlayer=i+1;
		}
		if(currentPlayer>=n){
			res[i]=currentPlayer;
			break;
		}
		res[i]=currentPlayer;
		vec[currentPlayer]--;

		
	}

		for(int i=0;i<n;i++){
			cout << res[i]+1 <<" ";
		}
		cout <<"\n";
	
	
	
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

