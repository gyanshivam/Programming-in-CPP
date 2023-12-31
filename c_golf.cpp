#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n_t, t_h, j, x, p, count=0;

	cin>>t;

	for(int i=0; i<t; i++)
	{
		cin>>n_t>>t_h>>j;

		n_t=n_t+1;
		p=(n_t/j)+1;

		for(int k=0; k<p; k++)
		{
			x=k*j;

			if(x==t_h)
			{
				count++;
				break;
			}
		}

		for(int k=p-1;  k>=0; k--)
		{
			x=k*j;

			if(x==t_h)
			{
				count++;
				break;
			}
		}

		if(count==1 || count==2)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		
		count=0;
	}

	return 0;
}
