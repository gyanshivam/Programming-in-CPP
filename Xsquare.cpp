#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string str;
	bool flag=false;

	cin>>t;

	while(t--)
	{
		cin>>str;

		for(int i=0; i<str.length(); i++)
		{
			for(int j=i+1; j<str.length(); j++)
			{
				if(str[i]==str[j])
				{
					flag=true;
					break;
				}
			}
			if(flag==true)
				break;
		}

		if(flag==true)
			cout<<"Yes\n";
		else
			cout<<"No\n";
		
	}
}