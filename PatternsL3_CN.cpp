#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;

	cin>>n;

	int i=1;

	while(i<=n)
	{
		int j=1;

		while(j<=i)
		{
			cout<<j;
			j++;
		}

		cout<<endl;
		i++;
	}

	cout<<"------------------------------------------------------------------------"<<endl;

		i=1;
	int val=1;

	while(i<=n)
	{
		int j=1;

		while(j<=i)
		{
			cout<<val;
			val++;
			j++;
		}

		cout<<endl;
		i++;
	}

	cout<<"------------------------------------------------------------------------"<<endl;

	i=1;
	val=1;

	while(i<=n)
	{
		int k=1;

		while(k<=n-i)
		{
            cout<<" ";
			k++;
		}

		int j=1;

		while(j<=i)
        {
			cout<<val;
			val++;
			j++;
		}

		cout<<endl;
		i++;
	}
}
