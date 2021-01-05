#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

using namespace std;

void solve() {
	int n,x;
	cin >> n >> x;
	int count  = 0;
	int before = 0;
	int curr = 1;
	for(int i = 0; i < n; ++i){
		int l,r;
		cin >> l >> r;
		count += (r - l + 1);
		while(curr + x <= l) curr += x;

		count += (l - curr);
		curr = r + 1;
	}
	cout<<count<<endl;
}

int32_t main() {
	FASTIO;/*
#ifdef ONLINE_JUDGE
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