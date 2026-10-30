#include<iostream>
using namespace std;
int Fn(int i){
	if (i>2) return (Fn(i-1)+Fn(i-2));
	else return 1;
}
int main(){
	cout<<Fn(20);
	return 0;
}
