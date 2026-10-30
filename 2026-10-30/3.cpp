#include<iostream>
using namespace std;
int gcd(int a,int b){
	int t=0;
	while(b){
		t=a%b;
		a=b;
		b=t;	
	}
	return a;
}
int lcm(int a,int b){
	return (a*b/gcd(a,b));
	
}
int main(){
	cout<<"GCD:"<<gcd(6,4)<<"\nLCM:"<<lcm(6,4);
	return 0;
}
