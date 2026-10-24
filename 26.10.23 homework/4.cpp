#include<iostream>

using namespace std;
int main(){
	for(int t=99;t<1000;++t)
		{
	
		int b=0;
		int i=t;
	
		b+=((i%10)*(i%10)*(i%10));
		i=i/10;
		b+=((i%10)*(i%10)*(i%10));
		i=i/10;
		b+=((i%10)*(i%10)*(i%10));

		if(b==t){
		
		cout<<b<<"\n";
		}
	}
	return 0;
}
