#include<iostream>
using namespace std;


void P_N(int n)
{
	if(n==1)
	{
		cout<<"1 "<<endl;
		return;
	}
	cout<<n<<" ";
	P_N(n-1);
}

int main()
{
	P_N(100);
	return 0;
}
