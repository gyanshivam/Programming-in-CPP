#include<bits/stdc++.h>
using namespace std;



int main()
{
    int ab=0, lat=0;
    
    string s;
    cin>>s;
    
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A')
            ab++;
        else if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
            lat++;
    }
    
    if(ab<2 && lat==0)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    
    return 0;
    
}