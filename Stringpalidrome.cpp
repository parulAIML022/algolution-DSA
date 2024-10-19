#include<iostream>
#include<string>
using namespace std;
int main()
{
	int len,count,i=0;
	count=0;
	string name;
	cout<<"enter a string:";
	cin>>name;
	len=name.length();
	while(i<len/2)
	{
		if(name[i]==name[len-1-i])
		{
			count+=1;
		}
		else
		{
			count=0;
		}
		i++;
		
	}
	if(count==(len/2))
	{
		cout<<"the string you entered is a palidrome";
	}
	else
	{
		cout<<"the string you entered is not a palidrome";
	}
	return 0;
}
