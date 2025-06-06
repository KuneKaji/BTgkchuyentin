#include <bits/stdc++.h>
using namespace std;
int xuli(int n){
	if (n<10) return n;
	while (n/10>0){
		int x=n;
		int tong=0;
		while (x>0){
			tong+=(x%10);
			x/=10;
		}
		n=tong;
	}
	return n;
}
int main(){
	int n;cin>>n;
	if (xuli(n)==9) cout<<"YES";
	else cout<<"NO";
}