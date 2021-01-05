#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int num = str.length();
		int count  = 0;
		int check_num = 0;
		for(int i = 1; i <= 9 ; ++i)
			if(i == (int) str[0] - '0'){
				check_num = i;
				break;
			}
		while(num){
			count+=num;
			num--;
		}
		check_num--;
		while(check_num--){
			
			count+=10;
		}
		cout<<count<<"\n";

	}
	return 0;
}
