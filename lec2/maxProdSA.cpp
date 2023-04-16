#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i< n; i++){
		cin>>arr[i];
	}

	//2 passes , 1 from front and 1 from back
	int ans = INT_MIN;
	int curProd=1;
	for(int i =0; i<n; i++){
		curProd*=arr[i];
		ans = max(curProd, ans);
		if(curProd == 0) curProd = 1;
	}
	curProd = 1;
	for(int i = n-1; i>=0; i--){
		curProd*=arr[i];
		ans = max(ans, curProd);
		if(curProd==0) curProd =1;
	}

	cout<<ans<<endl;
	return 0;
}
