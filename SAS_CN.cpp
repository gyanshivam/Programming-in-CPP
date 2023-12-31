#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int input[], int size)
{
     cout<<"Hi";
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j>size-1-i; j++)
        {
            if(input[j]>input[j+1])
            {
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }
}
int main()
{
    int arr[100];
    int t;

    cin>>t;

    while(t--)
    {
        int s;

        cin>>s;

        for(int i=0; i<s; i++)
            cin>>arr[i];

        bubbleSort(arr, s);

        for(int i=0; i<s; i++)
            cout<<arr[i]<<" ";
    }
}
