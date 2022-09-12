#include <bits/stdc++.h>

using namespace std;



//0 1 1 2 3 5 8 13 21 ...
int main(){
int t; 
cin>>t;
while(t--){
long a,b,c;
cin>>a>>b>>c ;

if(a<c + abs(c-b))cout<<1<<" ";
else if(a>c+abs(c-b))cout<<2<<" ";
else cout<<3<<" " ;
cout<<endl;	
}
}

