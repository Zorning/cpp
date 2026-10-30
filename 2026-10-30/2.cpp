#include<iostream>
using namespace std;
string zhishu(int a){
	for(int i=2;i<a;i++){
		if (a%i==0) return "False";
	}
	return "Ture";
		
}
int main(){
	cout<<zhishu(7);
	return 0;
	
}
