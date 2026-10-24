#include<iostream>
#include<string>
using namespace std;
int main(){
	string t;
	string b="";
	cin>>t;
	for(int i=0;i<t.size();++i){
		b=t[i]+b;
		
	}
	if (b==t) cout<<"是回文数";
	else cout<<"不是回文数";
	return 0
}
