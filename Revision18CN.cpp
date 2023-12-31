#include<bits/stdc++.h>
using namespace std;

void procNprint(int n)
{
    int arr[100];

    for(int i=0, j=n-1, k=0; i<n; i++)
    {
        if(i%2==0)
        {
            arr[k]=i+1;
            k++;
        }

        else
        {
            arr[j]=i+1;
            j--;
        }
    }

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int n;

    cin>>n;

    procNprint(n);
}
