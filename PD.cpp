#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,a,b,c,d, temp=0;
	
	cin>>t;
	
	while(t--)
	{
	   cin>>a>>b>>c>>d;
	   
	   if(a==b)
	    temp++;
	   if(a==c)
	    temp++;
	   if(a==d)
	    temp++;
	   if(b==c)
	    temp++;
	   if(b==d)
	    temp++;
	   if(c==d)
	    temp++;
	    
	   if(temp==1 || temp==3)
	    cout<<"1\n";
	   if(temp>3)
	    cout<<"0\n";
	   if(temp==0)
	    cout<<"2\n";

	   temp=0;
	}
	
}

