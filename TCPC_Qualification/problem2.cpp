// Your First C++ Program

#include <iostream>
using namespace std;
int main() {

int n,l,h;
cin>>l>>h;
cin>>n;
while(n--){
	int c;
	cin>>c;
	if(c<=1000){
		cout<<c<<" "<<c*l<<endl;
	}else{
		cout<<c<<" "<<1000*l+(c-1000)*h<<endl;
	}
	
}


}
