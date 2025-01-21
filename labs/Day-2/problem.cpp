#include <iostream>
using namespace std;

class A
{
public:
   
};

class B :  public A
{
    public:
    void showD(){
        cout<<"I am from B class";
     }
    void show()
    {
        cout << "CLass A show method" << endl;
    }
};
class C :  public A
{
    void showD(){
        cout<<"I am from C class";
     }
};
class D : public B, public C
{
};
int main()
{
    D obj;
    obj.show();
    //obj.showD();
    return 0;
}