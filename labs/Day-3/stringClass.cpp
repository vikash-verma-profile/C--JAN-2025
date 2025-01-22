#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){

    //immutable
    string str("Vikash Verma");
    string sample(5,'v');
    str.clear();
    string sample1="Rakesh sharma";
    cout<<str<<endl;
    cout<<sample<<endl;
    cout<<sample1<<endl;

    //mutable
    stringstream obj("Rohit ");
    //obj.clear();
    obj.str("Rohit X");
    cout<<obj.str();
    return 0;
}