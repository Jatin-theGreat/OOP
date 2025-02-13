#include<iostream>
using namespace std;
class Book
{
    private:
        string book_name;
        string author_name;
        int page_count;
        bool format_Type;
        float *chapter_pages;
        int chapter_numbers;
     
    public:
    	
        Book()
        {
            book_name = "";
            author_name = "";
            page_count = 0;
            format_Type = 0;
            chapter_pages = 0;
            chapter_numbers = 0;
        }
        
        Book(string name,string author, int pagecnt, bool format, float* chapter_pg, int chapter_no)
        {
            book_name = name;
            author_name = author;
            page_count = pagecnt;
            format_Type = format;
            chapter_pages = new float[chapter_no];
            for (int i=0;i<chapter_no;i++)
            {
                chapter_pages[i] = chapter_pg[i];
            }
            chapter_numbers = chapter_no;
        }

        void display()
        {
            cout<<"Book name: "<< book_name <<endl;
            cout<<"Book author name: "<< author_name <<endl;
            cout<<"Book page count: "<< page_count <<endl;
            cout<<"Format: " << format_Type<<endl;
            cout<<"Chapter pages: ";
            for (int i=0;i<chapter_numbers;i++)
            {
                cout<<chapter_pages[i]<<" ";
            }
            cout<<"\nChapter numbers: "<<chapter_numbers<<endl;
        }

        Book(const Book& obj)
        {
            book_name = obj.book_name;
		    author_name = obj.author_name;
		    page_count = obj.page_count;
		    format_Type = obj.format_Type;
		    chapter_numbers = obj.chapter_numbers;
		
		    chapter_pages = new float[chapter_numbers];
		    for (int i=0;i<chapter_numbers;i++)
			{
		        chapter_pages[i] = obj.chapter_pages[i];
    		}
        }

        ~Book()
        {
            delete[] chapter_pages;
            cout<<"Destructor is called"<<endl;
        }
};

int main()
{
    float chpages[] = {10, 20, 30, 40, 50};
    Book b1("ab bc cd", "abcd", 100, true, chpages, 5);
    b1.display();
    
    cout << "\nSecond book:\n";
    Book b2 = b1;
    b2.display();
    return 0;
}

