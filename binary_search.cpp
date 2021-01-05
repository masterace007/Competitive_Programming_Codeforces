#include<bits/stdc++.h>
using namespace std;

void binarySearch(int num,int start,int end,int arr[]){
	int mid = (start + end)/2;
	cout<<arr[mid]<<endl;
	if(arr[mid] > num){
		end = mid - 1;
		start = 0;
		binarySearch(num,start,end,arr);
	}
	else if(arr[mid] < num){
		start = mid + 1;
		binarySearch(num,start,end,arr);
	}
	else if(arr[mid] == num){
	    cout<<mid<<endl;
	}
	else{
		cout<<"Not Found"<<endl;
	}
}


int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; ++i)
		cin >> arr[i];

	int num;
	cin >> num;
	sort(arr,arr+n);
	for(int i = 0; i < n ; ++i)
	    cout<<arr[i]<<" ";
	cout<<endl;

	binarySearch(num,0,n-1,arr);


	return 0;
}