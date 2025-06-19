#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
	int f1=0,f2=1;
	while (f2<=n){
		int fn=f1+f2;
		f1=f2;
		f2=fn;
	}
	return f1;
}
int main(){
	int n;cin>>n;
	while (n>0){
		cout<<fibo(n)<<" ";
		n-=fibo(n);
	}
}