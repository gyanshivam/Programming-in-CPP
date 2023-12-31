#include<bits/stdc++.h>
using namespace std;

void search(int arr[],int s, int x)
{
    int begin = 0;
    int end = s-1;

    while(begin<=end)
    {
        int mid = (begin+end+1)/2;

        if(arr[mid]==x)
        {
            cout<<"Found";
            exit(0);
        }
        else if(arr[mid]>x)
            end = mid-1;
        else
            begin = mid+1;
    }
    cout<<"Not Found";
}
int main()
{
    int n, key, s_arr[50];

    cin>>n>>key;

    for(int i=0; i<n; i++)
        cin>>s_arr[i];
    search(s_arr, n, key);
}
