#include<iostream>
using namespace std;
class Box
{
	private:
		int len,brd,hei;	
	public:
		void getBoxInfo()
		{
			cout<<len<<endl<<brd<<endl<<hei<<endl;	
		}
		Box()
		{
			cout<<"Default constructor\n";
			len=0;
			brd=0;
			hei=0;
		}
		Box(int a)
		{
			cout<<"Constructor with 1 parameters\n";
			len=a;
			brd=a;
			hei=a;
		}	
		Box(int a,int b)
		{
			cout<<"Constructor with 2 parameters\n";
			len=a;
			brd=b;
			hei=b;
		}
		Box(int p,int q,int r)
		{
			cout<<"Constructor with 3 parameters\n";
			len=p;
			brd=q;
			hei=r;			
		}
		Box(const Box& obj)
		{
			cout<<"My Copy Constructor is called\n";
			len = obj.len;
			brd = obj.brd;
			hei = obj.hei;
		}
};

int main()
{
	Box b0;
	b0.getBoxInfo();
	
	Box b1(100);
	b1.getBoxInfo();
	
	Box b2(10,20);
	b2.getBoxInfo();
	
	Box b3(40,50,60);
	b3.getBoxInfo();
	
	Box b4(b3);
	b4.getBoxInfo();
	
	Box b5 = b1;
	b5.getBoxInfo();
}
