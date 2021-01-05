#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int t;
	cin>>t;
	while(t--){
		long long m,n,k,distance;
		cin>>n>>m;
		long long x[n],y[n];
		bool flag;int found = 0;
		long long record_x = 0,record_y = 0;
		
		for(int i = 0; i < n; i++)
			cin>>x[i]>>y[i];
        
		for(int k = 0; k < n; k++){
		    flag = true;
		    for(int i = 0; i < n ; i++){
		        distance = abs(x[i] - x[k]);
		        distance += abs(y[i] - y[k]);
			    if(distance > m ){
				    	flag = false;
				    	break;
			    }
		    }
		    if(flag == true)
		    {
		        cout<<"1\n";
		        found =1;
				break;
		    }
		}
		if(!found)
		cout<<"-1\n";
	}
	return 0;
}