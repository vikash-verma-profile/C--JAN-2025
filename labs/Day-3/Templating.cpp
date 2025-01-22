#include <iostream>
using namespace std;

template <typename T>
T myMax(T x, T y)
{
    return (x > y) ? x : y;
}

template <typename T>
class Array
{
private:
    T *ptr;
    int size;

public:
    Array(T arr[], int s)
    {
        ptr = new T[s];
        size = s;
        for (int i = 0; i < size; i++)
        {
            ptr[i] = arr[i];
        }
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << *(ptr + i) << endl;
        }
    }
};
int main()
{
    cout << myMax<int>(6, 7) << endl;
    cout << myMax<double>(3.0, 7.0) << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    Array<int> a(arr, 5);
    a.print();
    return 0;
}
