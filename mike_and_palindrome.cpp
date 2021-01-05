#include<bits/stdc++.h>
#define endl       '\n'
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

using namespace std;

void solve() {
	string str;
	cin>>str;
	int length = str.length();
	int count = 0;
	if(length % 2 ==0){
		int mid = length / 2;
		for(int i = 0 ,  j = length -1 ; i < mid ; ++i , --j){
			if(str[i] != str[j])
				count++;
		}
	}
	else{
		int mid = length / 2;
		for(int i = 0, j = length -1 ; i < mid ; i++ , j--){
			if(str[i] != str[j])
				count++;
		}
		if(count == 0)
		    count = 1;
	}
	if(count == 1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
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