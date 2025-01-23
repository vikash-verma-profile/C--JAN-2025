#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //writting in a file
    // ofstream outfile("example.txt");
    // if(!outfile){
    //     cout<<"Error opening file"<<endl;
    //     return 1;
    // }

    // outfile<<"File handling in c++"<<endl;
    // outfile<<"This is a new line in file"<<endl;
    // outfile.close();
    // cout<<"Data is written in file"<<endl;

    //reading from a file

    ifstream infile("example.txt");

       if(!infile){
        cout<<"Error opening file"<<endl;
        return 1;
    }

    string line;
    while (getline(infile,line)) //Read line by line
    {
       cout<<line<<endl;//display
    }
    infile.close();
    return 0;
}