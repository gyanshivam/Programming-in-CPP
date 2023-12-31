#include<bits/stdc++.h>
using namespace std;

int main()
{
    string command;
    cin>>command;
    
    /*for(int i=0; i<command.length(); i++)
    {
        if(command[i]=='(' && command[i+1]==')')
            command.replace(i,2,"o");
        if((command[i]=='(') && (command[i+1]=='a') && (command[i+2]=='l') && (command[i+3]==')'))
            command.replace(i,4,"al");
    }
    
    cout<<command;
    */
    string result="";
        
    for(int i=0; i<command.length(); i++)
    {
        if(command[i]=='G')
            result=result+'G';
        if(command[i+1]<command.length() && command[i]=='(' && command[i+1]==')')
            result=result+'o';
        if((command[i+3]<command.length()) && (command[i]=='(') && (command[i+1]=='a') && (command[i+2]=='l') && (command[i+3]==')'))
           {
                result=result + 'a';
                result=result +'l'; 
            }
    }
    
    cout<<result;

    return 0;
}