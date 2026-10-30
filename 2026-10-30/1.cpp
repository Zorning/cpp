#include<iostream>
using namespace std;
float chu(unsigned short a,unsigned short b){
	if (b==0) return -1;
	else return (float(a)/float(b));

}
int main(){
	cout<<chu(1,3);
	return 0;
} 
