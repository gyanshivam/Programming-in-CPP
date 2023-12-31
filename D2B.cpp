#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	long long n, rem_n, rem;
    long long ans=0;

	cin>>n;

    rem_n=n;
    rem=n%2;

    double i=0.0;

    while(rem_n>0)
    {
    	ans=ans+(rem*(long long)(pow(10.0,i)+0.5));
    	i=i+1.0;
        rem_n=rem_n/2;
        rem=rem_n%2;
    }

    cout<<ans;
}

