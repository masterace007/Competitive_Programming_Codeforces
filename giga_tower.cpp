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
	string str;
	cin >> str;
	string str_new = str;
	int num_new = 0;
	int steps_required = 0;
	int original = stoi(str);
	int str_new_int = stoi(str);
	if(str_new_int >= 0){
		reverse(str_new.begin(),str_new.end());
		for(int i = 0 ; i < str_new.length() ; ++i){
			if(str_new[i]- '0' > 8)
				steps_required += 9;
			if(str_new[i] == '8')
				steps_required += 10;
			else
				steps_required += (8 - (str_new[i] - '0'));
		}
		num_new = stoi(str_new);
	}
	else{
		reverse(str_new.begin(),str_new.end());
		//cout<<str_new.length()<<endl;
		if(str_new.length()-1 ==  1){
		    if(str_new[0] == '9')
		    steps_required = 1;
		    else
			steps_required = 8 + stoi(str_new);
		}
		else if(str_new.length() > 1){
			for(int i = 0; i < str_new.length() ; ++i){
				if(str_new[i] - '0' > 8)
					steps_required += 1;
				else if(str_new[i] - '0' == 8)
					steps_required += 10;
				else{
					int num_temp = abs(str_new[i] - '0');
					steps_required += (num_temp + 2);
				}
			}
		}
	}
	cout<<steps_required<<endl;
}

int32_t main() {
	FASTIO;/*
#ifndef ONLINE_JUDGE
	freopen("input//.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif*/
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}