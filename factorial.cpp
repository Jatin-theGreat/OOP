#include<iostream>
using namespace std;
int factorial(int no)
{
	if(no==0)
	return 1;
	int fact=1;
	for(int i=no;i>0;i--)
	{
		fact=i*fact;
	}
}
int main()
{
	int no,ans;
	cout<<"Enter the number : ";
	cin>>no;
	ans=factorial(no);
	cout<<"\nThe factorial of "<<no<<" is : "<<ans;
}
