#include<iostream>
using namespace std;
int main(){
	for (int i=1;i<10;++i){
		for(int t=1;t<=i;++t){
			cout<<i<<'*'<<t<<'='<<i*t<<' ';
		}
		cout<<'\n';
	}
	return 0;
}
