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

        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }

        int k=1,l=i;

        while(k<=i)
        {
            cout<<l;
            l++;
            k++;
        }

        int m=1;
        l--;
        while(m<=(i-1))
        {
            l--;
            cout<<l;
            m++;

        }

        cout<<endl;
        i++;
    }
}
