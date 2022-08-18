// Your First C++ Program

#include <iostream>
using namespace std;
int main() {

int c;
cin>>c;
while(c--){
	char x;
	string s;
	cin>>x;
	cin>>s;
	int index = 0 ;
	int ans = 0 ;
	int res=0;
	while(index< s.length()){
		while(index< s.length()&& x!=s[index] ){
			index++;
		}	
		if (s[index]==x){
		ans++;res=max(res,a)
		}		}
		ans++;
		while( index+1<s.length() && s[index+1] - s[index] == 1 || s[index]=='z'&&s[index+1]=='a'){
			ans++;index++;
			res=max(ans,res);
		}
		ans=0;
		
		index++;
	}
	
	
			cout<<res<<endl;

	
	
	
}


}
