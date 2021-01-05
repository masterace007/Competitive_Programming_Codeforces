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
	string str1,str2;
	cin >> str1;
	cin >> str2;
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	int max_length = max(str1.length(),str2.length());
	int counter = 0;
	for(int i = 0; i < max_length ; ++i){
		if(str1[i] != str2[i]){
			counter = 1;
			break;
		}
	}
	if(counter)
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