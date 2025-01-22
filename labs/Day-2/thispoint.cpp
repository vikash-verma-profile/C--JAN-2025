#include <iostream>

using namespace std;

class Sample{
    public:
    int a;
    Sample(int a){
       // this->a=a;
       a=a;
    }
    void print(){
        cout<<a;
    }
};

int main()
{
    Sample s(3);
    s.print();
    return 0;
}