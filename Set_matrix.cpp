#include<iostream>
using namespace std;
class Matrix
{
	private:
		int mat[3][3];
		int r,c;
	public:
		void getmatrix()
		{
			for(r=0;r<3;r++)
			{
				for(c=0;c<3;c++)
				{
					cout<<"Enter the element : ";
					cin>>mat[r][c];
				}
			}
		}
		
		void setmatrix()
		{
			for(r=0;r<3;r++)
			{
				for(c=0;c<3;c++)
				{
					cout<<mat[r][c]<<" ";
				}
				cout<<"\n";
			}
		}
};

int main()
{
	Matrix m1;
	m1.getmatrix();
	m1.setmatrix();
}
