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
	cin >> n >>m;
	vector <pair<int,int>> arr_pair;
	char arr[n][m];
	for(int i = 0; i < n ; ++i){
		for(int j = 0; j < m ; ++j){
			cin >> arr[i][j];
			if(arr[i][j] == 'S')
				arr_pair.push_back(make_pair(i,j));
		}
	}


	


}

int32_t main() {
	FASTIO;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}