#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=i,k=1; k<=i; j++,k++)
        {
            cout<<j;
        }
        cout<<endl;
    }

}
