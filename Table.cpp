#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter the number : ";
	cin>>number;
	for(int i=1;i<=10;i++)
	{
		int table=i*number;
		cout<<"\n "<<table;
	}
}
