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
	int n ;
	cin >> n;
	int arr[n];
	int j ;
	int no_of_negative = 0;
	int no_of_positive = 0;
	for(int i = 0; i < n ; ++i){
		cin >> arr[i];
		if(arr[i] < 0)
			no_of_negative++;
		else if(arr[i] > 0)
			no_of_positive++;
	}
	vector<int> negative_set;
	vector<int> positive_set;
	vector<int> zero_set;

	if(no_of_negative % 2 == 0){
		int k = 2;
		for(int i = 0; i < n ; ++i){
			if(arr[i] < 0 ){
				negative_set.push_back(arr[i]);
				arr[i]  = INT_MIN;
				break;
			}
		}
		no_of_negative -=1;
		if(no_of_negative > 1){
			k = 1;
			for(int i = 0 ; i < n ; ++i){
				if(arr[i] != INT_MIN){
					if(arr[i] < 0 && k){
						zero_set.push_back(arr[i]);
						k--;
						arr[i] = INT_MIN;
					}
				}
			}
			for(int i  = 0; i < n ; ++i){
				if(arr[i] == 0){
					zero_set.push_back(arr[i]);
					arr[i] = INT_MIN;
				    break;
				}
			}
			for(int i  = 0; i < n ; ++i){
				if(arr[i] != INT_MIN){
					positive_set.push_back(arr[i]);
				}
			}
		}
		else{
			for(int i = 0; i < n ; ++i){
				if((arr[i] < 0 || arr[i] == 0) && arr[i] != INT_MIN){
					zero_set.push_back(arr[i]);
					arr[i] = INT_MIN;
				}
			}
			for(int i = 0; i < n ; ++i){
				if(arr[i] != INT_MIN)
					positive_set.push_back(arr[i]);
			}

		}
	}
	else if(no_of_negative % 2 ==1){
		for(int i = 0; i < n ; ++i){
			if(arr[i] < 0){
				negative_set.push_back(arr[i]);
				arr[i] = INT_MIN;
				break;
			}
		}
		for(int i  = 0 ; i < n ; ++i){
			if(arr[i] == 0){
				zero_set.push_back(arr[i]);
				arr[i] = INT_MIN;
				break;
			}
		}
		for(int i = 0; i < n ; ++i){
			if(arr[i] != INT_MIN){
				positive_set.push_back(arr[i]);
			}
		}

	}
	cout<<negative_set.size()<<" ";
	for(int i = 0; i < negative_set.size() ; ++i)
		cout<<negative_set[i]<<" ";
	cout<<endl;
	cout<<positive_set.size()<<" ";
	for(int i  =0; i < positive_set.size() ; ++i)
		cout<<positive_set[i]<<" ";
	cout<<endl;
	cout<<zero_set.size()<<" ";
	for(int i = 0 ; i < zero_set.size() ; ++i)
		cout<<zero_set[i]<<" ";
	cout<<endl;

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