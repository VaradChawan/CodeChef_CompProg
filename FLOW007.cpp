#include<iostream>

using namespace std;
int main()
{
	int remainder,reverse,number;
	int T;//test Cases
	cin>>T;
	
	while(T--)
	{
		reverse=0;
		cin>>number;
		remainder=0;	
		while(number>0)
		{
			remainder=number%10;
			reverse=reverse*10+remainder;
			number=number/10;	
			
		}
		
		cout<<reverse<<endl;
	}
	
	return 0;
}
