#include <cstdlib>
#include <iostream>
#include <sys/types.h>
using namespace std;

int partition(int arr[], int left, int right){
	int pivot = left;
	//error was that we were doing i = left+1 instead of i=left
	int i = left, j = right-1;
	while(i<j){
		while(arr[i]<arr[pivot]) i++;
		while(arr[j]>arr[pivot]) j--;
		if(i<j){
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[pivot], arr[j]);
	return j;
}

void quickSort(int arr[], int l, int r){
	if(l<r){
		int pi = partition(arr, l, r);
		quickSort(arr, l, pi);
		quickSort(arr, pi+1, r);
	}
}

int main(){
	int arr[] = {7,5,13,8,9,1,11};
	quickSort(arr, 0, sizeof(arr)/sizeof(int));
	for(int i = 0; i<sizeof(arr)/sizeof(int); i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
