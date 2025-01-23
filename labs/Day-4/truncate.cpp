#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile("output.txt");
    if (!outfile)
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    outfile << "Vikash verma original content" << endl;
    outfile.close();

    ofstream Trucfile("output.txt", ios::trunc); // open a file in append more
    if (!Trucfile)
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    Trucfile << "File Truncated and new contents" << endl;
    Trucfile.close();
}