#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		string s1;
		cin>>s1;
		string s2;
		cin>>s2;
		int alpha[26];
		for (int i = 0; i<26; i++){
			alpha[s1[i]-'a']=i+1;
		}
		int sum=0;
		//adjacent elements absolute difference sum
		int sz = s2.size();
		for(int i =1; i<sz;i++){
			sum += abs(alpha[s2[i-1]-'a'] - alpha[s2[i]-'a']);
		}
		cout<<sum<<endl;
	}

	return 0;
}
