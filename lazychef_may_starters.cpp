#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	int x, m, d;
	int wt, ul;

	cin>>t;

	while(t--)
	{
		cin>>x>>m>>d;

		wt = x*m;
		ul = x+d;

		if(wt>ul)
			cout<<ul<<endl;
		else if(ul>wt)
			cout<<wt<<endl;
		else
			cout<<wt<<endl;
	}
}
