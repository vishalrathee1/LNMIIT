#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n;i++){
		cin>>arr[i];
	}
	int ans=0,wt=0,i=0,j=1;
	while(i<n&&j<n){
		if(arr[j]>=arr[i]){
			i=j;
			j++;
			ans+=wt;
			wt=0;
		}
		else{
			wt+=arr[i]-arr[j];
			j++;
		}	
	}
	wt=0;
	i=n-1;
	j=i-1;
	while(i>=0&&j>=0){
		if(arr[j]>arr[i]){
			i=j;
			j--;
			ans+=wt;
			wt=0;
		}
		else{
			wt+=arr[i]-arr[j];
			j--;
		}	
	}
	cout<<ans<<endl;

	return 0;
}
