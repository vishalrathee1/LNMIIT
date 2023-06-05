#include <iostream>
using namespace std;

//checking if arr[index] == find  --> cout<<index and return 
//else searchFirstIndex in arr from index index+1 to n-1
//if index == not index>n --> element not found
void searchFirstIndex(int find, int arr[], int index, int size) {
	if(index>= size){
		cout<<"Element not found"<<endl;
		return ;
	}
	if(arr[index] == find){
		cout<<index<<endl;
		return;
	}
	searchFirstIndex(find, arr, index+1, size);
	return ;
} 

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0; i<n; i++){
		cin>>arr[i];
	}
	int find;
	cin>>find; 
	
	searchFirstIndex(find, arr, 0, n); //0 to n-1 index search

	return 0;
}
