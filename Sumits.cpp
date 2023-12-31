#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, count=0;
	cin>>t;

	while(t--)
	{
		string str;
		cin>>str;

		char x, y;
		int a,b;

		for(int i=0; i<str.length(); i++)
		{
			x=str[i];
			y=str[i+1];

			if(x=='z' && y=='a')
				continue;
			else if(x=='a' && y=='z')
				continue;

			a = (int)x;
			b = (int)y;

			
			if(a>b && (a-b) != 1)
			{
				count=1;
				cout<<"NO"<<endl;
				break;
			}

			else if(a<b && (b-a) != 1)
			{
				count=1;
				cout<<"NO"<<endl;
				break;
			}

		}

		if(count==0)
			cout<<"Yes"<<endl;
	}
	return 0;
}