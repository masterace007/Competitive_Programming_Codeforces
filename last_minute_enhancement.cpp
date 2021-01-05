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
	arr[n-1]++;
	set<int> arr_set;
	map<int,int> arr_map;
	for(int i = 0; i < n; ++i)
		arr_set.insert(arr[i]);
	for(int i = 0; i < n; ++i)
		if(arr_map.find(arr[i])==arr_map.end())
			arr_map.insert(make_pair(arr[i],1));
		else
			arr_map[arr[i]]++;

	int count = 0;
	for(auto x : arr_map){
		if(x.second == 1)
			
		else{
			bool flag = false;
			for(int i = 0; i < n ; ++i){
				if(x.first+1 == arr[i]){
					flag = true;
					arr_map[arr[i]]++;
					count++;
					break;
				}
			}
			if(!flag)
				count++;
		}
}

for(int i = 0 ; i < n ; ++i)
	arr_set.insert(arr[i]);
cout<<arr_set.size()<<endl;

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