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
	int arr[n];
	for(int i = 0; i < n; ++i)
		cin >> arr[i];

	sort(arr,arr+n);
	int max_difference = arr[n-1] - arr[0];
	int no_of_ways = 0;
	int count_max = 0;
	int count_min = 0;
	for(int i = 0; i < n; ++i)
		if(arr[0] == arr[i])
			count_min++;
	for(int i = 0; i < n; ++i)
		if(arr[n-1] == arr[i])
			count_max++;
	if(max_difference > 0)
	no_of_ways = count_max * count_min;
	else{
		//writiing here
	}
	

	cout<<max_difference<<" "<<no_of_ways<<endl;
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