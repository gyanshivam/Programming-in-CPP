#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,count=0;
    cin>>t;
    
    while(t--)
    {
        string jewels, stone;
        cin>>jewels>>stone;
        
        for(int i=0; i<stone.length(); i++)
        {
            for(int j=0; j<jewels.length(); j++)
            {
                if(stone[i]==jewels[j] && stone.length()==1)
                    count=1;
                else if(stone[i]==jewels[j])
                {
                    count++;
                    break;
                }
            }
        }
        
        cout<<count<<endl;
        count=0;
    }
    
	return 0;
}
