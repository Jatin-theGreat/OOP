#include <iostream>
#include <map>
#include <vector>
#include <numeric>  
#include <algorithm> 
using namespace std;
int main()
{
    map<string, vector<int>> students;
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore(); 

    for(int i=0;i<n;++i)
	{
        string name;
        vector<int> marks(3);
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter marks for 3 subjects: ";
        for (int j=0;j<3;++j)
		{
            cin >> marks[j];
        }
        cin.ignore();
        students[name] = marks; 
    }

    cout<<"\nAll student records and their averages:"<< endl;
    map<string, double> averages;
    for (const auto& entry : students)
	{
        const string& name = entry.first;
        const vector<int>& marks = entry.second;
        double sum = accumulate(marks.begin(), marks.end(), 0);
        double average = sum / marks.size();
        averages[name] = average;
        cout<<"Student: "<<name<<", Marks: ";
        for(int mark : marks)
		{
            cout<<mark<<" ";
        }
        cout<<", Average: "<<average<< endl;
    }
    auto topper = max_element(averages.begin(), averages.end(),
        [](const pair<string, double>& a, const pair<string, double>& b)
		{
            return a.second < b.second; 
        });

    cout << "\nTopper: " << topper->first << " with average " << topper->second << endl;

    return 0;
}

