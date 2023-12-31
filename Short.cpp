#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int t;
	
	cin>>t;
	
	while(t--)
	{
	    cin>>s;
	    string n_s(s, 0, 2);

	    for(int i=0; i<s.length(); i++)
	    {
	    	if(i%2!=0 && i!=1)
	        	n_s.push_back(s[i]);
	    }

	    cout<<n_s<<endl;
	}
	
	return 0;
}
