#include <bits/stdc++.h>

using namespace std;






int main(){
cin.tie(0);
int t;
cin>>t;

while(t--){
	string s;
	cin>>s;
	vector<pair<int, int> > v;
	int l = min(s[0] - 'a'+1 ,s[s.length()-1] - 'a'+1 ) ;
	int r = max(s[0] - 'a'+1 ,s[s.length()-1] - 'a'+1 ) ;

	for(int i = 1 ; i < s.length() -1 ; ++i ){
		if(s[i] -'a'+1 >= l && s[i] -'a'+1 <= r){
			v.push_back({s[i]+ -'a'+1,i+1});
		}
	}
	sort(v.begin(), v.end());
	cout<<r-l<<" "<<v.size()+2<<endl;
	cout<<1<<" ";
	if(s[0]<s[s.length()-1])
	for(int i = 0 ;i< v.size();++i){
		cout<<v[i].second<<" ";
	}else{	
			for(int i = v.size()-1 ;i>=0;--i){
			cout<< v[i].second<<" ";
	}
	}
	cout<<s.length()<<endl;
}


return 0;
}

// 12 15 7 9 3 
// 12 7 9 15  3
