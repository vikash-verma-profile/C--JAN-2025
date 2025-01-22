#include <iostream>
using namespace std;


class ClassName{
    public:
    ClassName(int a){
        cout<<a<<endl;
    }
    ClassName():ClassName(34){
        cout<<"Consytuctor called"<<endl;
    }
};
int  main(){

    ClassName c;
    return 0;
}