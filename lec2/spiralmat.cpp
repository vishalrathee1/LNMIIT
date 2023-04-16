#include<iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i =0; i<n ;i++){
		for(int j = 0; j< m; j++){
			cin>>arr[i][j];
		}
	}
	int strow=0,enrow=n-1,stcol=0,encol=m-1;

	while(strow<=enrow && stcol <=encol){
	//strow print
	for(int i = stcol; i<=encol; i++){
		cout<<arr[strow][i]<<'\t';
	}
	strow++;
	//encol print
	for(int i =strow; i<=enrow; i++){
		cout<<arr[i][encol]<<'\t';
	}
	encol--;
	//enrow right to left
	if(strow<=enrow){
	for(int i = encol; i>=stcol ; i--){
		cout<<arr[enrow][i]<<'\t';
	}
	}
	enrow--;
	//stcol print from down to up
	if(stcol<=encol){
	for(int i = enrow; i>=strow; i--){
		cout<<arr[i][stcol]<<'\t';
	}
	}
	stcol++;
	}
	return 0;
}
