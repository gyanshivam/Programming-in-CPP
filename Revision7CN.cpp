#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int i=1;

    while(i<=n)
    {
        int j=1;
        char c='@'+n;

        while(j<=i)
        {
            cout<<c;
            j++;
            c--;
        }

        cout<<endl;
        i++;
    }
}

