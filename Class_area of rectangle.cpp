#include<iostream>
using namespace std;
class rectangle
{
	private:
		float length,breadth,area;
	public:
		void setInfo();
		void dispInfo();
};
void rectangle::setInfo()
{
	cout<<"Enter the length and breadth of rectangle : ";
	cin>>length>>breadth;
	area = length * breadth;
}
void rectangle::dispInfo()
{
	cout<<"The area of the rectangle is : "<<area;
}
int main()
{
	rectangle r1;
	r1.setInfo();
	r1.dispInfo();
}
