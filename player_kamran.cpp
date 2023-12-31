// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin >> t;
int playerA = 0;
int playerB = 0;
while(t--)
{
int a,b;
cin >> a >> b;

if(a > b)
{
if(a-b > playerA)
{
playerA = a-b;
}
}
else
{
if(b-a > playerB)
{
playerB = b-a;
}
}
}
if(playerA > playerB)
{
cout << 1 << " " << playerA << endl;
}
else
{
cout << 2 << " " << playerB << endl;
}

return 0;
}