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
	string str;
	cin >> n;
	cin >> str;
	int start = -1,end = -1;
	bool flag_start  = true,check_last = false;
	vector<pair<int,int> > arr;
	for(int i = 0; i < str.length() ; ++i){
		if(islower(str[i])){
			if(flag_start){
				start = i;
				flag_start = false;
				check_last = true;
			}
			if(check_last){
				end = i;
			}
		}
		else{
			if(isupper(str[i]) && start == -1)
				continue;
			else{
				arr.push_back(make_pair(start,end));
				flag_start = true;
				start = -1;end = -1;
				check_last = false;
			}
		}
	}
	int max_size = 0;
	set<char> str_new_initial;
	for(int i = start; i <= end;++i){
	    if(islower(str[i]))
	        str_new_initial.insert(str[i]);
	    else
	        break;
	}
	max_size = str_new_initial.size();
	
	for(auto num : arr){
		set<char> str_new;
		for(int i = num.first ; i <= num.second ; ++i)
			str_new.insert(str[i]);
		int size_set = str_new.size();
		max_size = max(max_size,size_set);
	}

	cout<<max_size<<endl;
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