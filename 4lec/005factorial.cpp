#include <iostream>
using namespace std;

//multiplying n to the factorial of n-1
int fact(int n){
	if(n<=1) return 1;
	return n*fact(n-1);
}

int main(){
	int n;
	cin>>n;
	int ans = fact(n);  //represent factorial of n
	cout<<ans<<endl;

	return 0;
}
