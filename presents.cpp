#include<iostream>
using namespace std;

int main()
{
    int fr;

    cin>>fr;

    int pre[fr];

    for(int i=1; i<=fr; i++)
        cin>>pre[i];
    for(int i=1, j=0; i<=fr; i++)
    {
        j=pre[i];
        pre[j]=i;
        cout<<i<<" "<<j<<" ";
    }

    //for(int i=1; i<=fr; i++)
      //  cout<<pre[i]<<" ";

    return 0;
}
