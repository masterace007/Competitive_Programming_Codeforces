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
	map<pair<int,int>,int> arr_map;
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		int a,b;
		cin >> a >> b;
		pair<int,int> p;
		p.first = a;
		p.second = b;
		if(arr_map.find(p) == arr_map.end())
			arr_map.insert(make_pair(p,1));
		else
			arr_map[p]++;
	}
	int max_num = INT_MIN;
	for(auto x : arr_map){
		if(max_num < x.second)
			max_num = x.second;
	}
	cout<<max_num<<endl;
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