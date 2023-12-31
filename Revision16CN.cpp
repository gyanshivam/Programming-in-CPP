#include<bits/stdc++.h>
using namespace std;

int main()
{
    int st, en, step, cel;

    cin>>st>>en>>step;

    while(st<=en)
    {
        cel=((st-32)*5)/9;
        cout<<st<<" "<<cel<<endl;
        st += step;
    }
}
