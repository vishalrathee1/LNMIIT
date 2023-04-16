#include <iostream>
#include <iterator>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string text = "abcdefgh";
	string pat = "def";

	//brute force
	int j = 0;
	for(int i=0; i<text.size()-pat.size(); i++){
		if(text[i] == pat[j]){
			int t = i;
			while(text[t]==pat[j]){
				t++;
				j++;
			}
			if(j==pat.size()) {
				cout<<t-j<<endl;
				break;
			}
		}
	}

	//KMP algo 
	//form LPS
	int lps[pat.size()];
	int prevlps = 0,i=1;
	while(i<pat.size()){
		if(pat[i]==pat[prevlps]){
			prevlps++;
			lps[i] = prevlps;
			i++;
		}
		else{
			if (prevlps == 0){
				lps[i] = 0;
				i++;
			}
			else{
				prevlps = lps[prevlps-1];
			}
		}
	}

	//KMP implementation
	i=0;
	j=0;
	while(i<text.size()){
		if(text[i] == pat[j]){
			i++;
			j++;
			if(j==pat.size()){
				cout<<i-j<<endl;
				break;
			}
		}
		else{
			if(j==0){
				i++;
			}
			else{
				j=lps[j-1];
			}
	}
	}

	return 0;
}

