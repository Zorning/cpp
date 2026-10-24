#include<iostream>

using namespace std;
int main(){
	int a;
	int n;
	cin>>a>>n;
	int sum=0;
	for(int i=1;i<=n;++i){
		int c=0;
		for(int t=1;t<=i;++t){
			c=10*c+a;
			
			}
		sum +=c;
	}
	cout<<sum;
	return 0;
	
	
}
