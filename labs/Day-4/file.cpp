#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // writting in a file
    //  ofstream outfile("example.txt");
    //  if(!outfile){
    //      cout<<"Error opening file"<<endl;
    //      return 1;
    //  }

    // outfile<<"File handling in c++"<<endl;
    // outfile<<"This is a new line in file"<<endl;
    // outfile.close();
    // cout<<"Data is written in file"<<endl;

    // reading from a file

    // ifstream infile("example.txt");

    //    if(!infile){
    //     cout<<"Error opening file"<<endl;
    //     return 1;
    // }

    // string line;
    // while (getline(infile,line)) //Read line by line
    // {
    //    cout<<line<<endl;//display
    // }
    // infile.close();

    // Append an existing file

    /*
        ios::app==> append
        ios::out==> writing
        ios::in==> reading
        ios::binary ==> read binary
        ios::ate==> open for writing .file pointer at the end
        ios::trunc==> if the file exists and its contents are truncated
    */

    ofstream outfile("example.txt", ios::app); // open a file in append more
    if (!outfile)
    {
        cout << "Error opening file" << endl;
        return 1;
    }

    outfile << "this is an appended line" << endl;
    outfile.close();
    cout << "Data is appended successfully";
    return 0;
}