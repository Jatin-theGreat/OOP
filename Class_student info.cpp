#include<iostream>
using namespace std;
class student
{
	private:
		char name[20];
		int roll_no,phy,chem,maths;
		float average;
	public:
		void setInfo();
		void dispInfo();
};
void student::setInfo()
{
	cout<<"Enter the name : ";
	cin>>name;
	cout<<"Enter the Roll number : ";
	cin>>roll_no;
	cout<<"Enter the marks in physics : ";
	cin>>phy;
	cout<<"Enter the marks in chemistry : ";
	cin>>chem;
	cout<<"Enter the marks in maths : ";
	cin>>maths;
	average = (phy+chem+maths)/3;
}
void student::dispInfo()
{
	cout<<"\nName : "<<name;
	cout<<"\nRoll number : "<<roll_no;
	cout<<"\nAverage : "<<average;
}
int main()
{
	student s1;
	s1.setInfo();
	s1.dispInfo();
}
