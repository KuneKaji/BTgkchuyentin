#include <bits/stdc++.h>
using namespace std;
int powmod(int a,int b,int c){
	if (b==0) return 1;
	int ans=powmod(a,b/2,c);
	if (b%2==0) return ((ans%c)*(ans%c))%c;
	else return ((((ans%c)*(ans%c))%c)*(a%c))%c;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int tich=1;
	for (int i=0;i<c;i++){
		tich*=10;
	}
	cout<<powmod(a,b,tich);
}