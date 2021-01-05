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
	int k;
	cin >> k;
	string str;
	cin >> str;
	map<char,int> str_map;
	for(int i = 0; i < str.length(); ++i)
		if(str_map.find(str[i]) == str_map.end())
			str_map.insert(make_pair(str[i],1));
		else
			str_map[str[i]]++;
	int counter = 0;
	for(auto x : str_map ){
		if(x.second != k){
			counter = 0;
			break;
		}
	}
	if(!counter)
		cout<<-1<<endl;
	else{
		string str_new = "";
		for(auto [x,y] : str_map){
			str_new += x;
		}
		for(int i = 0; i < k ; ++i)
			cout<<str_new;
		cout<<endl;
	}


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