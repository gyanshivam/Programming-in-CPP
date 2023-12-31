#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,c_t,c_s,i_s,ans;

	cin>>t;

	while(t--)
	{
		cin>>c_t>>c_s>>i_s;

		i_s=(100-c_t)*i_s;
		c_s=c_s+i_s;
		ans=c_s*10;

		cout<<ans<<endl;
	}
	return 0;
}
