#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;

	cin>>t;

	while(t--)
    {
        int num, fact=1;

        cin>>num;

        for(int i=1; i<=num; i++)
            fact = fact*i;
        cout<<fact<<endl;
    }
	return 0;
}

