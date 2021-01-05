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
	int n,m;
	cin >> n >> m;
	int arr[n][m];
	for(int  i =0 ; i < n ; ++i){
		for(int j = 0; j < m ; ++j)
			cin >> arr[i][j];
	}
	int negative_count = 0;
	int min_num = INT_MAX;
	int sum = 0;
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < m ; ++j){
			if(arr[i][j] < 0){
				negative_count++ ;
				arr[i][j] *= -1;
				sum += arr[i][j];
			}
			else
			{
				sum += arr[i][j];
			}

			if(arr[i][j] < min_num && arr[i][j] != 0)
				min_num = arr[i][j];
		}
	}
	if(negative_count % 2 != 0)
		sum -= min_num;
	cout<<sum<<endl;
}

int32_t main() {
	FASTIO;/*
#ifdef ONLINE_JUDGE
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