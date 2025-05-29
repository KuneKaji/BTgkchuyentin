#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;cin>>n>>k;
	vector<int> a;
	for (int i=0;i<n;i++){
		int tmp;cin>>tmp;
		a.push_back(tmp);
	}
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			int tong=0;
			for (int l=i;l<=j;l++){
				tong+=a[l];
			}
			if (tong==k){
			 	cout<<"co ton tai";return 0;
			}
		}
	}
}