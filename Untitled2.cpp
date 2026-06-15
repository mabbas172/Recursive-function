#include<iostream>
using namespace std;


int main()
{
	string a;
	cin>>a;
	
	int start=0;
	int end=a.length()-1;
	for(int i=0;i<a.length();i++)
	{
		if(a[start]!=a[end])
		{
			cout<<"False";
			return 0;
		}
		else
		{
			cout<<"true";
			return 0;
		}
	}
}
