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
	for(int i = 0; i < n ; ++i)
		cin >> arr[i];
		
	sort(arr,arr+n,greater<int>());
	int num = 0;
	
	bool flag = true;
	
	for(int i = 1; i <= arr[n-1] ; ++i){
	    flag = true;
	    for(int j = 0; j < n ; ++j){
	        if(arr[j] % i != 0){
	            flag = false;
	            break;
	        }
	    }
	    if(flag)
	        num = i;
	}
	int sum = num * n;
	cout<<sum<<endl;
	
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