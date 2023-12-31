#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        
        string final,f,s,l;
        
        if(str.length()>10)
        {
            f=str.front();
            s=to_string(str.length()-2);
            l=str.back();
            final=f+s+l;
        }
        else
            final=str;
            
        cout<<final<<endl;
        final.clear();
    }
    
    return 0;
}