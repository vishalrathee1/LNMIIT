#include <algorithm>
#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	int maxsubsum = INT_MIN;
	//Most brute force approach
	for(int i = 0; i<n; i++){
		for(int j = i; j<n; j++){
			int ssum=0;
			for(int k = i; k<=j; k++){
				ssum+=arr[k];
			}
			maxsubsum = max(maxsubsum, ssum);
		}
	}
	cout<<maxsubsum<<endl;
	maxsubsum = INT_MIN;
	for(int i = 0; i<n; i++){
		int ssum=0;
		for(int j = i; j<n; j++){
			ssum+=arr[j];
			maxsubsum = max(maxsubsum, ssum);
		}
	}
	cout<<maxsubsum<<endl;
	
	//Kadane's algo
	int ans=INT_MIN;
	int curSum = 0;
	int lind = -1,rind=-1,tlind = 0;
	for(int i =0; i<n;i++){
		curSum+=arr[i];
		if(curSum>ans){
			lind=tlind;
			rind = i;
			ans=curSum;
		}
		//ans= max(ans, curSum);
		if(curSum<0){
			curSum=0;
			tlind=i+1;
		}
	}

	cout<<ans<<endl;
	//printing left and right index of subarray with max sum
	cout<<lind<<" "<<rind;

	return 0;
}
