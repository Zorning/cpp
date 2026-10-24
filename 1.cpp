#include<iostream>

using namespace std;
int main(){
	int i;
	cin>>i;
	if (i<=10){
		cout<<(0.1*i);
	}
	else if (10<i & i<=20){
		cout<<(1+0.075*(i-10)); 
	}
	else if(20<i & i<=40){
		cout<<(1.75+0.05*(i-20)); 
	}
	else if(40<i & i<=60){
		cout<<(2.75+0.03*(i-40));
	}
	else if(60<i & i<=100){
		cout<<(3.35+0.015*(i-60)); 
	}
	else if(100<i){
		cout<<(3.95+0.01*(i-100)); 
	}
	return 0; 
}
