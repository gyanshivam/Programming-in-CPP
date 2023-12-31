#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, count=0;
	
	cin>>t;
	
	for(int i=0; i<t; i++)
	{
	    cin>>n;
	    
	    int a[n];
	    
	    for(int j=0; j<n; j++)
	        cin>>a[j];

	   	for(int k=0; k<n; k++)
		{
			if(n-1==0)
			{
				count++;
				break;
			}
			if(a[k]>a[k+1])
			{
				count=count+2;
				if(n>=2)
				{
					if(a[k+2]>a[k+1])
						a[k+2]=a[k+1]-1;
				}
	 		}
	 		if(a[k]<a[k+1])
	 		{
	 			count++;
	 			a[k+1]=a[k]-1;
	 		}
	 	}		   
	   	 
	   cout<<count<<endl;
	}
	return 0;
}
