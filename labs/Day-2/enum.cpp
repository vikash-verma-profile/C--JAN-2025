#include <iostream>
using namespace std;

enum Days{

    Monday=1, //0
    Tuesday=2,
};

string toString(Days day){
 switch (day)
 {
 case Days::Monday:
    return "Monday";
    break;
case Days::Tuesday:
    return "Tuesday";
    break;
 
 default:
    break;
 }
}
int main()
{
    Days today=Days::Tuesday;

    cout<<"Day number:"<<today<<endl;
    cout<<"Day number:"<<static_cast<int>(today)<<endl;
    cout<<"Day number:"<<toString(today)<<endl;
    return 0;
}