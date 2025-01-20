#include <iostream>

using namespace std;

class Sample
{
public:
    int id;

    // Constructor
    // Defualt
    Sample()
    {
        id = 1;
        cout << "Constructors";
    }
    // Parametrized Contructors

    Sample(int x)
    {
        cout << "Parameterized";
        id = x;
    }

    // destructor
    ~Sample()
    {
        cout << "Destructors";
    }
};

int main()
{
    Sample s1;
    cout << s1.id << endl;
    Sample s2(21);
    cout << s2.id << endl;
    return 0;
}
