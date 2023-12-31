#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n_f, h_f, add=0;

    cin>>n_f>>h_f;

    int friends[n_f];

    for(int i=0; i<n_f; i++)
        cin>>friends[i];
    for(int i=0; i<n_f; i++)
    {
        if(friends[i]>h_f)
            add=add+2;
        else
            add++;
    }

    cout<<add;

    return 0;
}
