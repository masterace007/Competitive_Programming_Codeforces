#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

void solve() {
	int k,n;
	cin >> k >> n;
	int64_t arr[n];
	int64_t sum = 0;
	int64_t sum_bitwise = arr[0];
	for(int i = 0;i < n ; ++i){
		cin >>arr[i];
		sum += arr[i];
	}
	for(int i = 1; i < n; ++i){
		sum_bitwise ^= arr[i];
	}
	sum_bitwise *= 2;
	int num = sum ^ sum_bitwise;
	if(sum_bitwise == sum)
		cout<<0<<endl;
	else{
		cout<<1<<endl;
		cout<<num<<endl;
	}


	
}

int32_t main() {
	FASTIO;/*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}