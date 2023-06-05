#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	//ast collision algo
	
	for(int i =1; i<n; i++){
		int j = i-1;
		int key = arr[i];
		//condition for collision
		while(key<0 && arr[j]>0 ){
			//when arr[j] gets destroyed
			if(abs(key)>arr[j]){
				arr[j--] = 0;
			}
			//both get destroyed
			else if(abs(key)==arr[j]){
				arr[j] =0;
				arr[i] =0;
				break;
			}
			//key gets destroyed
			else{
				arr[i] = 0;
				break;
			}
		}
	}

	vector<int> ans;
	for(int i =0; i<n; i++){
		if(arr[i]!=0){
			ans.push_back(arr[i]);
		}
	}

	for(int i =0; i<ans.size(); i++){
		cout<<ans[i]<<'\t';
	}

	return 0;
}

