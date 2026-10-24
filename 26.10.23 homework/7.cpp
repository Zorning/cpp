#include<iostream>
using namespace std;
/*int f(int n){
	if(n>2){
		return (f(n-2)+f(n-1));}
	else return 1;
		
	
}
int main(){
	
cout<<f(20);
return 0;	
	
}
*/
int main(){
	int s1 = 1;
	int s2 = 1;
	int t;
	for(int i=3;i<=20;++i){
		t=s1;
		s1=s2;
		s2+=t;
	
	}
	cout<<s2;
}