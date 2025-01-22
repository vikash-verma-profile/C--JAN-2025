#include <iostream>

using namespace std;

class Myclass
{
    private:
        int value1;
        const int value2;
        int& value3;
    public:
        Myclass(int v1,int v2,int v3):value1(v1),value2(v2),value3(v3){
            //
        }
        void display() const{
            cout<<"Value"<<value1<<"value 2:"<<value2<<"Value "<<value3;
        }
};
int  main(){
    int refValue=10;
    Myclass obj(5,20,refValue);
    obj.display();
    return 0;
}