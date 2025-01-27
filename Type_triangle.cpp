#include<iostream>
using namespace std;
class isosceles
{
	protected :
		int side1,side2,side3;
	public:
		void setinfo(int, int, int );
		int isisosceles();	
};
void isosceles::setinfo(int s1, int s2 , int s3)
{
	side1=s1;
	side2=s2;
	side3=s3;
}
int isosceles::isisosceles()
{
	if(side1==side2 && side2!=side3 || side2==side3 && side3!=side1 || side1==side3 && side3!=side2)
	return 1;
	else
	return 0;
}
class equilateral : public isosceles
{
	public :
		int isequilateral();
};
int equilateral::isequilateral()
{
	if(side1==side2 && side2==side3)
	return 1;
	else
	return 0;
}
class scalene : public equilateral
{
	public :
		int isscalene();
};
int scalene::isscalene()
{
	if(side1!=side2 && side1!=side2 && side2!=side1 && side2!=side3 && side3!=side1 && side3!=side2)
	return 1;
	else
	return 0;
}
int main()
{
	scalene tri3;
	tri3.setinfo(10,12,15);
	if(tri3.isequilateral())
	cout<<"\nEquilateral";
	else if(tri3.isisosceles())
	cout<<"\nIsosceles";
	else if(tri3.isscalene())
	cout<<"\nScalene";
}
