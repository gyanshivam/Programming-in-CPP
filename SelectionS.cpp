#include<bits/stdc++.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int lowesti = i;
        for(int j=i+1; j<n; j++)
            if(arr[j]<arr[lowesti])
                lowesti = j;
        swap(&arr[lowesti], &arr[i]);
    }
}
int main()
{
    int n, arr[20];

    cin>>n;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

