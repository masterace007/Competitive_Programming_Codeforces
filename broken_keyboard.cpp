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
	string str;
	cin >> str;
	reverse(str.begin(),str.end());
	set<char> working;
	for(int i = 0; i < str.length() -1 ; ++i){
		if(str[i] != str[i + 1])
			working.insert(str[i]);
		else
			i++;
	}
	if(str[str.length() - 1] != str[str.length() - 2])
		working.insert(str[str.length() - 1]);
	string working_set = "";
	for(auto x: working)
		working_set += x;
	cout<<working_set<<endl;
}

int32_t main() {
	FASTIO;/*
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}