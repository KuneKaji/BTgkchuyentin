#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;cin>>n>>k;
	vector<int> a;
	for (int i=0;i<n;i++){
		int tmp;cin>>tmp;
		a.push_back(tmp);
	}
	unordered_map<int,int> mp;
	mp[0]=1;
	int ps=0;
	for (int i=0;i<n;i++){
		ps+=a[i];
		if (mp[ps-k]!=0){
			cout<<"co ton tai";return 0;
		}
		else mp[ps]++;
	}
}