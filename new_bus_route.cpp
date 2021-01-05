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
	for(int i = 0; i < n ; ++i){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	vector <int> arr_difference;
	for(int i = 0; i < n - 1; ++i){
		int num = abs(arr[i]  - arr[i+1]);
		arr_difference.push_back(num);
	}
	
	int num = *min_element(all(arr_difference));
	int count = 0;
	for(int i = 0; i < arr_difference.size(); ++i)
		if(num == arr_difference[i])
			count++;
	cout<<num<<" "<<count<<endl;


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