#include<bits/stdc++.h>
#define endl       '\n'
#define pb         push_back
#define mod        1000000007
#define int        long long int
#define hii        cout<<"yes\n";
#define all(x)     x.begin(),x.end()
#define deb(x)     cout<<#x<<" : "<<x<<"\n";
#define FASTIO     ios_base::sync_with_stdio(0);cin.tie(0);cin.tie(0);

using namespace std;

void solve() {
	int arr[5][5];
	for(int i = 0; i < 5 ; ++i)
		for(int j = 0 ; j < 5 ; ++j)
			cin >> arr[i][j];

	int record_x = 0, record_y = 0;
	for(int i = 0; i < 5 ; ++i)
		for(int j = 0 ; j < 5 ; ++j)
			if(arr[i][j] == 1){
				record_y = j;
				record_x = i;
			}
	
	int operation = abs(record_y - 2) + abs(record_x - 2);
	cout<<operation<<endl;
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