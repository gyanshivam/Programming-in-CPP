#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int med[6];
    
    cin>>t;
    
    while(t--)
    {
        for(int i=0; i<6; i++)
            cin>>med[i];
        if(med[0]+med[1]+med[2]>med[3]+med[4]+med[5])
            cout<<"1";
        else
            cout<<"2";
        cout<<endl;
    }
}
