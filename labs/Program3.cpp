#include <iostream>

using namespace std;

int main()
{
    int choice = 23;
    switch (choice)
    {
    case 1:
        cout << "Case 1 matched";
        break;

    default:
        cout << "Please provide valid input";
        break;
    }
    return 0;
}
