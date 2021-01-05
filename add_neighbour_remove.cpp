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
	vector<int> arr;
	vector<int> arr_diff;
	for(int i = 0; i < n; ++i)
		cin >> arr[i];
	
	int count = 0;
	int max_num = *max_element(arr.begin(),arr.end());
	int min_num = *min_element(arr.being(),arr.end());
	if( max_num ==  min_num){
		cout<<0<<endl;
		return;
	}
	else{
		for(int i = 0; i < n; ++i){
			arr_diff.push_back(arr[i] - min_num);
		}
	}
	cout<<count<<endl;
}

int32_t main() {
	FASTIO;
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}