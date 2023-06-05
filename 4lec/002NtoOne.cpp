#include <iostream>
using namespace std;

void NtoOne(int n, int first){
	if(first == 1) {
		cout<<first<<endl;
		return;
	}
	//print first element nth element
	cout<<first<<endl;
	//call function to print 1 to n-1, 1 to first-1 [1 to n-1]
	NtoOne(n, --first);  //it will execute NtoOne(n,n)  first = n-1;
	return ;

}

int main(){
	int n;
	cin>>n;
	NtoOne(n,n);

	return 0;
}
