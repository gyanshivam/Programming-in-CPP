#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;

	cin>>t;

	int arr[t];

    for(int i=0; i<t; i++)
        cin>>arr[i];
    for(int j=1, ans=1; j<=arr[j-1]; j++)
        ans = ans*(j);
        cout<<ans<<endl;
	return 0;
}

