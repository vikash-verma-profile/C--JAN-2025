#include <iostream>
#include <stdexcept>
using namespace std;

class Test
{
public:
    void Method2()
    {
        throw runtime_error("method2");
    }
    void Method1()
    {
        try
        {
            // throw runtime_error("Sample");
            Method2();
        }
        catch (exception &ex)
        {
            cout << "From method1" << ex.what();
        }
    }
    ~Test()
    {
       throw runtime_error("Excpi in desrtiu");
    }
};

int main()
{

    try
    {
        Test t;
      //  t.Method1();
       throw runtime_error("Original exception");
    }
    catch (exception &e)
    {
         cout << "Caought" << e.what() << endl;
        //throw runtime_error("new context"+std::string(e.what()));
    }

    return 0;
}