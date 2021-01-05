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
	int arr[n+1];
	for(int i = 1; i <= n; ++i){
		cin >> arr[i];
	}
	vector<int> score_arr;
	for(int i = 1; i <= n; ++i){
		int score = arr[i];
		//cout<<score<<" ";
		int index = i + arr[i];
		while(index <= n){
			score += arr[index];
			index += arr[index];
			
		}
		score_arr.push_back(score);
    }
	sort(score_arr.rbegin(),score_arr.rend());\
	
    //for(auto x : score_arr)
     //   cout<<x<<" ";
	cout<<score_arr[0]<<endl;
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