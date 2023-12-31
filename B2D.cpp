#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	long int b, fin_num=0;

    cin>>b;

    long int rem_b = b;
    int rem = b%10;
    double i = 0.0;

    while(rem_b>0)
    {
        long int part_o_b;
        part_o_b = rem*(long int)((pow(2.0, i)+0.5));
        fin_num=fin_num+part_o_b;
        i=i+1.0;
        rem_b=rem_b/10;
        rem=rem_b%10;
    }

    cout<<fin_num;

}
