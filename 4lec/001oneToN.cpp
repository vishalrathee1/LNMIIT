#include <iostream>
using namespace std;

//it will print 1st element and call for remainig elements
void oneToN(int n, int first){
	if(first == n){
		cout<<first<<endl;
		return;
	}
	//print first element of this series from [first, n]
	cout<<first<<endl;
	//call another function for remaining [first+1, n] elements 
	oneToN(n, first+1);
	return;
}

int main(){
	int n;
	cin>>n;
	//you have to print numbers from 1 to N, N you will read from user
	//using for loop we can easily do that
	//but we will try to do it using recursion
	//this will print 1 to n using recursion
	oneToN(n,1);

	return 0;
}
