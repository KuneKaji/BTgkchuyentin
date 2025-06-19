#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,f1=0,f2=1,cnt=0,fn=1;cin>>a>>b;
	while (f1<=b){
		if (f1>=a) cnt+=1;
		fn=f1+f2;
		f1=f2;
		f2=fn;
	}
	cout<<cnt;
}