#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;

    int arr[50];

    for(int i=0; i<n; i++)
        cin>>arr[i];

    int biggest=INT_MIN;

    if(n==0 || n==1)
    {
        cout<<biggest;
        exit(0);
    }

    int count=0;

    for(int i=0; i<n-1; i++)
    {
        if(biggest<arr[i])
            biggest=arr[i];
        if(arr[i]!=arr[i+1])
            count=1;
    }

    if(count==0)
    {
        cout<<INT_MIN;
        exit(0);
    }

     for(int i=0; i<n; i++)
     {
        if(biggest==arr[i])
            for(int j=i; j<n-1; j++)
            	arr[j]=arr[j+1];
    		n--;
     }

    biggest=arr[0];
    for(int i=0; i<n; i++)
    {
        if(biggest<arr[i])
           biggest=arr[i];
    }

    cout<<biggest;

}
