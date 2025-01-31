#include<iostream>
using namespace std;
class Car
{
	private:
		string brand_name;
		string model_name;
		int year;
		float price;
	public:
		Car()
		{
			cout<<"\n\nConstructor\n\n";
			cout<<"Enter the Brand name : ";
			cin>>brand_name;
			cout<<"Enter the model name : ";
			cin>>model_name;
			cout<<"Enter the year : ";
			cin>>year;
			cout<<"Enter the price : ";
			cin>>price;
		}
		~Car()
		{
			cout<<"\n\nDestructor\n\n";
		}
};
int main()
{
	Car c1,c2;	
}
