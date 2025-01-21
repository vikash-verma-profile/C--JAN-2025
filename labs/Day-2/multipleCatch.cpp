#include <iostream>
#include <stdexcept>
using namespace std;

// multiple catch and user defined

class CustomException
{
public:
    string messsage;
    CustomException(string msg) : messsage(msg) {}
};

class CustomException2 : public runtime_error
{
public:
    CustomException2(const string& msg) : runtime_error(msg) {}
};

int main()
{

    try
    {
        throw CustomException("Custom exception occured");
    }
    catch (CustomException &e)
    {
        cout << e.messsage << endl;
    }

    try
    {
        throw CustomException2("New exception");
    }
    catch (CustomException2 &e)
    {
        cout << e.what() << endl;
    }
     catch (std::out_of_range &e)
    {
        cout << e.what() << endl;
    }
      catch (std::bad_alloc &e)
    {
        cout << e.what() << endl;
    }
    /*
        int x = 1;
        int y=0;
        int z;
        try
        {
            z= x / y;
        }
        catch (int e)
        {
            cout << "Caught an integer" << e << endl;
        }
        catch(exception& ex){
             cout << "exception" << endl;
        }
        catch (...)
        {
            cout << "Caught an unknown exception" << endl;
        }
    */
    return 0;
}