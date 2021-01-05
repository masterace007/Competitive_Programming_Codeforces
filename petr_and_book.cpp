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
int N = 500;
void solve() {
	int n;
	cin >> n;
	int num;
	int arr[N];
	for(int i = 0; i < n ; ++i){
		cin >> num;
		arr[num]++;
	}
	int num_100 = arr[100] * 100;
	int num_200 = arr[200] * 200;
	if(num_100 == num_200)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	
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