#include <bits/stdc++.h>
using namespace std;
vector<int> nt(1000000,1);
void ero(){
	nt[1]=0;nt[2]=1;
	for (int i=2;i<=1000;i++){
		if (nt[i]==1){
		for (int j=i*i;j<=1000000;j+=i) nt[j]=0;}
	}
}
int main(){
	ero();
	int l,r;cin>>l>>r;
	for (int i=l;i<=r;i++){
		if (nt[i]==1){
			cout<<i<<"\n";
		}
	}
}