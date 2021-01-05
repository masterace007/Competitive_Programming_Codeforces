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
	vector<int> arr(3);
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(all(arr));
	int max_num = 0;
	do{
		int num = (arr[0]+arr[1]) * arr[2];
		max_num = max(max_num,num);
		//cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
		//cout<<num<<endl;

	}while(next_permutation(all(arr)));
	int product = arr[0] * arr[1] * arr[2];
	int add_num = arr[0]+arr[1]+arr[2];
	max_num = max(max_num,product);
	max_num = max(max_num,add_num);
	cout<<max_num<<endl;
	
}

int32_t main() {
	FASTIO;/*
#ifdef ONLINE_JUDGE
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