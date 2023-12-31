#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str1, str2;
	char ch;
	int val1=0,val2=0;
	
	cin>>str1>>str2;
	
	for(int i=0,j=0; i<str1.length(); j++,i++)
	{
	   ch = str1[i];
	   
	   if(islower(ch))
	    str1[i]=toupper(ch);
	    
	   ch = str2[j];
	   
	   if(islower(ch))
	    str2[j]=toupper(ch);
	}

	for(int i=0,j=0; i<str1.length(); i++,j++)
	{
	    val1 = val1 + (int) str1[i];
	    val2 = val2 + (int) str2[j];

	    if(val1>val2)
	    {
	     	cout<<"1";
	     	break;
	    }
	    else if(val1<val2)
	    {
	     	cout<<"-1";
	     	break;
	    }
	    else if(i==str1.length()-1 && val1 == val2)
	    {
	     	cout<<"0";
	     	break;
	    }
	}

	return 0;
}
