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
	int num = stoi(str);
	if(str.length() == 1)
		cout<<str<<endl;
	else{
	    while(true){
			str = to_string(num);
			int counter = 0;
			for(int i = 0; i < str.length(); ++i){
				int divisor = str[i]-'0';
				if(num % divisor != 0){
					counter = 1;
					break;
				}
			}
			if(!counter){
				cout<<num<<endl;
				return;
			}
			num++;
		}
	}
	return;
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