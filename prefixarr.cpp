#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n;i++){
		cin>>arr[i];
	}
	int pref[n]={arr[0]};
	for(int i =1; i<n; i++) {
		pref[i] = arr[i] + pref[i-1];
	}

	for(int i =0; i<n; i++){
		cout<<pref[i]<<'\t';
	}
	
	cout<<endl;

	int prefprod[n] = {arr[0]};
	int suffprod[n];
	suffprod[n-1] = 1;
	for(int i = 1; i<n;i++){
		prefprod[i] = arr[i-1] * prefprod[i-1];
	}
	for(int i = n-2; i>=0; i--){
		suffprod[i] = arr[i+1] * suffprod[i+1];
	}

	int ans[n]={0};
	for(int i =0; i<n; i++){
		ans[i] = prefprod[i] * suffprod[i];
		cout<<ans[i]<<'\t';
	}




	return 0;	
}
