#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int n;cin>>n;
	vector<int> ts;
	//a.Phân tích n thành thừa số nguyên tố
	for (int i=2;i<=sqrt(n);i++){
		int mu=0;
		while (n%i==0){
			n/=i;
			mu+=1;
		}
		if (mu!=0){
			ts.push_back(i);ts.push_back(mu);
			cout<<i<<"^"<<mu<<" ";
			if (n>1) cout<<"x ";
		}
	}
	if (n>1){
	 ts.push_back(n);ts.push_back(1);
	 cout<<n<<"^"<<1<<"\n";}
	//b.Tính số ước của n
	int tong=1;
	for (int i=1;i<ts.size();i+=2){
		tong*=(ts[i]+1);
	}
	cout<<tong<<"\n";
	//c.Tính tổng ước của n
	tong=1;
	for (int i=0;i<ts.size();i+=2){
		tong*=((pow(ts[i],ts[i+1]+1)-1)/(ts[i]-1));
	}
	cout<<tong;
}