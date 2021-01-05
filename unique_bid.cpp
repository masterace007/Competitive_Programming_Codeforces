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
	int n;
	cin >> n;
	vector<int> arr(n,0);
	for(int i  = 0 ; i < n ; ++i)
		cin >> arr[i];
	map<int,vector<int>> arr_dict;
	for(int i = 0; i < arr.size(); ++i){
		if(arr_dict.find(arr[i])!=arr_dict.end())
			arr_dict[arr[i]].push_back(i);
		else{
			vector<int> num;
			num.push_back(i);
			arr_dict[arr[i]]  = num;
		}
	}
	int ans = -2;
	for(auto i : arr_dict){
		if(i.second.size() == 1){
			ans = i.second[0];
			break;
		}
	}
	cout<<ans+1<<endl;
	
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