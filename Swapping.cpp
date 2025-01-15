#include<iostream>
using namespace std;
float swapping(float &n1, float &n2)
{
	float tmp;
	tmp = n1;
	n1 = n2;
	n2 = tmp;
}
int main()
{
	float n1,n2;
	cout<<"Enter two numbers for swapping : ";
	cin>>n1>>n2;
	cout<<"Before swapping : "<<n1<<" "<<n2;
	swapping(n1,n2);
	cout<<"\nAfter swapping : "<<n1<<" "<<n2;
}
