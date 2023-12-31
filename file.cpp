#include<bits/stdc++.h>

using namespace std;

int main()
{
	long int n;
	cin>>n;

	long int l,b,c,d;
	long int i=1;
	int count=0;


	if(n%2==0)
	{
		n=n/2;;
		while(n-i>0)
		{
			l=n-i;
			b=i;
			i++;
			if(l!=b)
			{
				if(l==d && b==c)
					continue;
				count++;
			}
			c=l;
			d=b;
		}

	}
	else
		count=0;
	cout<<count;
	return 0;
}