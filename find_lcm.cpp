#include<bits/stdc++.h>
using namespace std;

int main()
{
	int lcm, a, b;

	cin>>a>>b;

	for(int i=2; i<=a*b; i++)
	{
		if(a%i==0 && b%i==0)
		{
			lcm=i;
			break;
		}
		else
			lcm=a*b;
	}

	cout<<lcm<<endl;
}