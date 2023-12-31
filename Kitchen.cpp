#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;

	while(t--)
	{
	    int n, time, count=0;

	    cin>>n;

        for(int i=0; i<n; i++)
            cin>>timi[i];
        for(int i=0; i<n; i++)
            cin>>tt[i];

        for(int i=0; i<n; i++){
            if(i==0)
                time=timi[i];
            else
                time=timi[i]-timi[i-1];

            if(tt[i]<=time)
                count++;
        }

        cout<<count<<endl;
	}
	return 0;
}
