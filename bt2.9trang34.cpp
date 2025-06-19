#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if (b==0) return a;
	return gcd(b,a%b);
}
int lcm(int a,int b){
	int x=a*b;
	return x/gcd(a,b);
}
int main(){
	int n;cin>>n;vector<int> a(n);
	for (int i=0;i<n;i++) cin>>a[i];
	int x=a[0];
	for (int i=1;i<n;i++){
		x=lcm(x,a[i]);
	}
	cout<<x;
}