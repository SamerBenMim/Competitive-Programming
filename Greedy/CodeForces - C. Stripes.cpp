#include <bits/stdc++.h>
 
using namespace std;
#define fastInp cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
void solve() {
char t[8][8];
for(int i = 0 ; i < 8 ; ++i){
	
	for(int j = 0 ; j < 8 ; ++j){
		
	cin>>t[i][j];
	}
} 
for(int i = 0 ; i < 8 ; ++i){
	int r=0;
	int b=0;
	for(int j = 0 ; j < 8 ; ++j){
		if(t[i][j]=='B')b++;
		if(t[i][j]=='R')r++;
	}
//	if(b==8) {cout<<"B"<<endl; return;}
	if(r==8) {cout<<"R"<<endl; return;}
} 
for(int i = 0 ; i < 8 ; ++i){
	int r=0;
	int b=0;
	for(int j = 0 ; j < 8 ; ++j){
		if(t[j][i]=='B')b++;
		if(t[j][i]=='R')r++;
	}
	if(b==8) {cout<<"B"<<endl; return;}
//	if(r==8) {cout<<"R"<<endl; return;}
}
cout<<"B"<<endl; 
 
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
 
 
 
 
 
 
//n n
//n n-1
//n n-2   n-1 n-1
//n n-3   n-1 n-2    
//n n-4   n-1 n-3    n-2 n-2 
//n 0     n-1 1      n-2 2    n-3 3 
//
//1 2 3 4 5 7 7
