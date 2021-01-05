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
	string temp = str;
	reverse(temp.begin(),temp.end());
	string str_new_formed = "";
	int j = 0;
	for(int i = 0; i < str.length(); ++i){
		if(temp[i] == '0')
			j++;
		else
			break;
	}
	for(int k = j; k < temp.length(); ++k){
		str_new_formed += temp[k];
	}
	
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