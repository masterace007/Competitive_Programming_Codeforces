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

int binarySearch(int arr[],int num,int start,int end){
	int mid = (start + end) / 2;
	
	if(num <= arr[mid]){
		if(mid-1 > 0){
			if(arr[mid-1] < num )
				return mid;
			else{
				end = mid - 1;
				binarySearch(arr,num,0,end);
			}
		}
		else{
			return mid;
		}
	}
	else
		start = mid + 1;
	return binarySearch(arr,num,start,end);

}

void solve() {
	int n;
	cin >> n;
	int arr[n];
	int before = 0;
	for(int i = 0; i < n ; ++i){
		cin >> arr[i];
		arr[i] += before;
		before = arr[i];
	}


	int m;
	cin >> m;
	int arr_worm[m];
	for(int i = 0; i < m; ++i)
		cin >> arr_worm[i];
	int start = 0,end = n - 1;
	for(int i = 0; i < m ; ++i){
		if(arr_worm[i] <= arr[0])
			cout<<1<<endl;
		else{
			int num = binarySearch(arr,arr_worm[i],start,end);
			cout<<num+1<<endl;
		}
	}
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