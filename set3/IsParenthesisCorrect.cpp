#include <iostream>
#include<string>
using namespace std;
int IsParenthesisCorrect(string s)
{
    int i,j,count=0;
    for(i=0;i<=s.length();i++)
    {
        if(s[i]=='(')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    if(count==0)
    {
        return 1;
    }
    else if(count>0)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}
int main()
{
    string s;
    getline(cin,s);
    bool validity= IsParenthesisCorrect(s);
    if(validity==1)
    {
        cout<<"the string is valid";
    }
    else
    {
        cout<<"the string is not valid";
    }
    return 0;
}
