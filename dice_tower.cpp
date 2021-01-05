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
	int t;
	cin>>t;
	int64_t arr[t];
	for(int i = 0; i < t; ++i)
		cin >> arr[i];
	for(int i = 0; i < t ; ++i){
		int64_t on_top = arr[i] % 14;
		int num = floor(arr[i] / 14);
		if( num >= 1 && ( on_top>= 1 && on_top <= 6))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}

int32_t main() {
	FASTIO;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}