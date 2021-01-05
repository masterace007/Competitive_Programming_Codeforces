#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int bookshelf_arr[n+1];
		for(int i  = 1; i < n+1; ++i)
			cin>>bookshelf_arr[i];
		vector <int> arr;
		for(int i = 1; i < n+1 ; ++i){
			if(bookshelf_arr[i] == 1)
				arr.push_back(i);
		}
        if(arr.size() > 1){    
		    vector <int> diff_arr;
		    for(int i = 1; i < arr.size(); ++i){
			    int num = (arr[i] - arr[i-1]) -1;
			    if(num > 0)
			        diff_arr.push_back(num);
			        
		      //  cout<<"\n\n\n";
		    }
		    int count = 0;
		    for(int i = 0; i < diff_arr.size();++i){
			    if(diff_arr[i] > 0)
				    count+=diff_arr[i];
		    }
		    cout<<count<<"\n";
        }
		else
		    cout<<"0"<<"\n";
	}
	return 0;
}
