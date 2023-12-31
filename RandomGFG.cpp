#include<bits/stdc++.h>
using namespace std;

void solve(int a[][20],int r,int c)
{
    int temp;

    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(j==0)
            {
                temp=a[i][j];
                a[i][j]=a[i][c-1];
            }

            else if(j==c-1)
                a[i][j]=temp;

            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int a[20][20];
    int r,c;

    cin>>r>>c;

    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
            cin>>a[i][j];
    }

    cout<<endl;

    solve(a, r, c);

    return 0;
}
