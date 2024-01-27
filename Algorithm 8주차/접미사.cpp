#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	string word;
	
	cin>>word;
	
	reverse(word.begin(),word.end());
	
	vector<string> str;
	
	for(int i=0;i<word.size();i++){
		str.push_back(word.substr(0,i));
	}
	
	reverse(str.begin(),str.end());
	
	reverse(word.begin(),word.end());
	
	cout<<"\n";
	
	cout<<word+"\n";
	
	for(int i=0;i<word.size();i++){
		reverse(str[i].begin(),str[i].end());
		
		cout<<str[i]+"\n";
	}
	
	return 0;
}
