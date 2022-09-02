#include <bits/stdc++.h>
 
using namespace std;

int main(){
long t;
cin>>t;
while(t--){
long long n ;
cin>>n;
cout<< 2*(n/2+n/3) +n<<endl;
}
return 0;
}
/*

26 62 36 63 66 

2
3

1 1
************
2 4   
2/2 *2 +2 = 4
************
(3/2 +3/3)*2 +3= 7 
************
(4/2+4/3)*2 +4 

              
                          
                          
                          





*/
