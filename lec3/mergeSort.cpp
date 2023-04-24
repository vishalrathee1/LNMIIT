#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right){
	int s1 = mid-left+1, s2 = right-mid;
	int a1[s1];
	int a2[s2];
	int j=0;
	int i = left;
	//storing left half into a1
	for(int j = 0; j<s1; j++){
		a1[j]=arr[i++];
	}

	//storing right half into a2
	i=mid+1;
	for(int j = 0;j<s2;j++){
		a2[j]=arr[i++];
	}
	int k=left;
	i=0;
	j=0;
	//merging
	while(i<s1 && j<s2){
		if(a1[i]>a2[j]){
			arr[k++]=a2[j++];
		}
		else {
			arr[k++] = a1[i++];
		}
	}

	while(i<s1){
		arr[k++] = a1[i++];
	}

	while (j<s2){
		arr[k++] = a2[j++];
	}

}

void mergeSort(int arr[], int l, int h){
	int mid = l+ (h-l)/2;
	//dividing into two halfs 
	//left half
	if(l<h){
	mergeSort(arr, 0, mid);
	//right half
	mergeSort(arr, mid+1, h);
	//merging both the arrays 
	merge(arr, l, mid, h);
	}
}

int main(){
	int arr[] = {9,8,13,4,6,15};
	mergeSort(arr,0,sizeof(arr)/sizeof(int));
	for(int i = 0; i<sizeof(arr)/sizeof(int); i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
