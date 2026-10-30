#include<iostream>
using namespace std;
int getpower(int a,int b){
	if (b==0) return 1;
	else if(b<0) return 0;
	else return (a*getpower(a,b-1));
}
double getpower(double a,int b){
	if (b==0) return 1;
	else if(b<0) return 0;
	else return (a*getpower(a,b-1));
}
int main(){
	cout<<getpower(2,0)<<'\n';
	cout<<getpower(1.2,2);
	return 0;
	
}
