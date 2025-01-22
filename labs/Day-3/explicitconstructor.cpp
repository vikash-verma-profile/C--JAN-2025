#include <iostream>

using namespace std;

class Myclass
{
    public:
    explicit Myclass(int value){
        cout<<"Constructor value"<<value<<endl;
     }
};
void printValue(Myclass obj){
    cout<<"Value printed"<<endl;
}
int main(){
    Myclass obj(42);
    printValue(obj);
    //printValue(43); //Implicit conversion from int to myclass
    return 0;
}