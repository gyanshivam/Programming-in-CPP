#include <iostream.>			
using namespace std;			
			
int main()			
{			
string s;			
cin >> s;			
int count = 0;			
int num = 0;			
for(int i=0;i<s.size();i++)			
{			
for(int j=0;j<i;j++)			
{			
if(s[i] == s[j])			
{			
num++;			
}			
}			
if(num == 0)			
{			
count++;			
// cout << count << endl;			
}			
num = 0;			
}			
if(count % 2 == 0)			
{			
cout << "CHAT WITH HER!";			
}			
else			
{			
cout << "IGNORE HIM!";			
}			
return 0;			
}			