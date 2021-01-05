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
	int a,b;
	cin >> a >> b;
	int difference = abs(a -b);
	int way_difference = 0;
	if(difference % 2 == 0){
		way_difference = 1;
	}
	int greater_b = 0;
	int greater_a = 0;
	for(int i = 1; i <= 6; ++i){
		if(abs(a-i) > abs(b - i))
			greater_b++;
		else if(abs(a - i) < abs(b - i))
			greater_a++;
	}
	if(a == b)
		way_difference = 6;
	cout<<greater_a<<" "<<way_difference<<" "<<greater_b<<endl;
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