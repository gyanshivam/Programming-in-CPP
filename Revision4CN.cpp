#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, pow, total=1;

    cin>>n>>pow;

    for(;pow>=1; pow--)
        total=total * n;

    cout<<total;
}
