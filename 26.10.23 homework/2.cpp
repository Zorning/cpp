#include<iostream>
using namespace std;
int main(){
	int s;
	cin>>s;
	if (s==10|s==9) cout<<"你认为电影很经典";
	else if (s==8|s==7) cout<<"你认为电影非常好";
	else if (s==6|s==5) cout<<"你认为电影一般";
	else if (s<5) cout<<"你认为电影是烂片";
	return 0;

}
