#include <iostream>
using namespace std;

//it will multiply num with num^(pow-1)   2^5 --> 2*(2^4)
int power(int num, int pow){
	if(pow == 0) return 1;
	return num*power(num, pow-1);
}

int main(){
	int number,pow;
	cin>>number>>pow;
	int ans = power(number,pow);
	cout<<ans<<endl;

	return 0;
}
