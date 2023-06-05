#include <iostream>
using namespace std;

// it is adding value of arr[presentIndex] in summ of summ(arr, rest of the indices)
int summ(int arr[], int presentIndex, int size){
	if(presentIndex>=size){
		return 0;
	}
	return arr[presentIndex] + summ(arr, presentIndex+1, size); //representing summ of elements from present index +1 to n
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int ans=0;
	ans = summ(arr, 0, n); //representing summ of elements of arr from index [0 to n)
	cout<<ans<<endl;


	return 0;
}
