#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int T;
	
	cin>>T;

	int num,firstDigit;
	int sum=0;
			
	while(T--)
	{
		cin>>num;	
				
		int remainder=num%10;		
		while(num>0)
		{
			firstDigit=num%10;
			num/=10;
				
		}
			sum=remainder+firstDigit;
			cout<<sum<<endl;	
	}
		
	
	return 0;
}
