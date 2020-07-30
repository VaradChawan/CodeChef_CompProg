#include<iostream>
#include<cstring>
using namespace std;
int main(){
	
	int T;
	cin>>T;
	
	while(T--){
		
		int sum=0;
		
		int num;
		cin>>num;
		int temp=num;
		int rem;
		while(num!=0)
		{
			rem=num%10;
			sum=sum+rem;
			num=num/10;	
		}
		cout<<sum<<endl;
		
	}
	
	return 0;
}

