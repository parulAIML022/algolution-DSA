#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
bool is_unwanted_char(char c) {
    return c == ' ' || c == ',' || c == ':';
}
int stringpalindrome(string s)
{
	int i,j;
	int length= s.length();
	for(i=0;i<s.length()/2;i++)
	{
			if(s[i]!=s[length-i-1])
			{
				return 0;
			}
	}
		return 1;
}
int main()
{
	string s;
	cout<<"enter a string:";
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		s[i]= tolower(s[i]);
	}
	s.erase(remove_if(s.begin(), s.end(), is_unwanted_char), s.end());
	cout<<s;
	int palcheck= stringpalindrome(s);
	if(palcheck==0)
	{
		cout<<" is not a palindrome";
	}
	else
	{
		cout<<" is a palindrome";
	}
	return 0;
}
