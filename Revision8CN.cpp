#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int i=1, j=n;

    while(i<=n)
    {
        int k=1;

        while(k<=(n-i+1))
        {
            cout<<j;
            k++;
        }
        j--;
        i++;
        cout<<endl;
    }
}
