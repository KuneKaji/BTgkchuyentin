#include <bits/stdc++.h>
using namespace std;
vector<bool> snt(1000000,1);
#define int long long
void ero(){
	snt[0]=0;snt[1]=0;snt[2]=1;
	for (int i=2;i<=sqrt(1000000);i++){
		if (snt[i]==1){
			for (int j=i*i;j<=1000000;j+=i){
				snt[j]=0;
			}
		}
	}
}
int powmod(int a,int b,int c){
	if (b==0) return 1;
	int ans=powmod(a,b/2,c);
	if (b%2==0) return ((ans%c)*(ans%c))%c;
	else return ((((ans%c)*(ans%c))%c)*(a%c))%c;
}
signed main(){
	int n;cin>>n;
	ero();
	for (int i=1;i<=1000000;i++){
		if (powmod(2,i,i)==2&&snt[i]==0) cout<<i<<" ";
	}
}