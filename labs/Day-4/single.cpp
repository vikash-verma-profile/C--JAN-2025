#include <iostream>
#include <string>

using namespace std;

/*
class Report
{
public:
    void generateReport()
    {
        cout << "Generating Report" << endl;
    }
    void saveToFile(const string &filename)
    {
        cout << "Saving report " << filename << endl;
    }
};
*/

class ReportGenerator{
    public:
    void generateReport(){
        cout<<"Generating Report"<<endl;
    }
};

class ReportSaver{
    public:
    void saveToFile(const string &filename)
    {
        cout << "Saving report " << filename << endl;
    }
};