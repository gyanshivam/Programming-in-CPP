#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, g, p, r, max, min, count=0;

	cin>>t;

	while(t--)
	{
		cin>>g>>p;

		int a[10];

		for(int i=1; i<=10; i++)
			cin>>a[i];

		for(int i=10; i>=1; i++)
		{
			if(a[i]==p)
			{
				count++;
				if(i==g)
				{
					max=count;
					min=count;
				}
			}

			/*else if(a[i]>p && i != 0)
			{
				count++;
				a[i-1] = (a[i] - p) + a[i-1];
			}

			else if(a[i]<p && i != 0)
			{
				r = p - a[i];
				a[i] = a[i] + (a[i-1]-r);

				if(a[i]==p)
				{
					count++;
					if(i==g)
					{
						max=count+1;
						min=count;
					}
				}

				else
					count++;
			
			}*/
		}
		cout<<endl<<count<<endl;

		count=0;
	}
}
