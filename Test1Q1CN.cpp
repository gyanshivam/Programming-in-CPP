#include<iostream>
using namespace std;
#include <limits.h>


int main(){

    // Write your code here

    int n, i=1, num, p_num, biggest, s_b;

    cin>>n;

    cin>>p_num;
    cin>>num;

    if(num>p_num)
    {
    	biggest=num;
        s_b=p_num;
	}

    else if(num<p_num)
    {
        biggest=p_num;
        s_b=num;
    }

    else
    {
        biggest=num;
        s_b=num;
    }

    while(i<=n-2)
    {
        cin>>num;

        if(num>biggest && biggest==s_b)
            biggest=num;
      	else if(num>biggest)
            biggest=num;
        else if(num>s_b)
            	s_b=num;
        i++;
    }

    if(biggest==s_b)
        cout<<INT_MIN;
    else
        cout<<s_b;
}


