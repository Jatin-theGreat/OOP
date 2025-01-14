#include<iostream>
using namespace std;
int main()
{
	int n1,n2,sum,subsrct,multi;
	float div;
	cout<<"Enter two numbers : ";
	cin>>n1>>n2;
	sum=n1+n2;
	cout<<"\nSum : "<<sum;
	subsrct=n1-n2;
	cout<<"\nSubstraction : "<<subsrct;
	multi=n1*n2;
	cout<<"\nMultiplication : "<<multi;
	div=float(n1)/float(n2);
	cout<<"\nDivision : "<<div;
}
