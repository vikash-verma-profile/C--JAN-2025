#include <iostream>

using namespace std;

void print()
{
    cout << "Vikash Verma";
}
int main()
{
    /*
    int a = 5;
    cout << a<<endl;
    cout << &a;
    int *ptr;
    ptr=&a;
    cout<<"value at ptr = "<<ptr<<"\n";
    cout<<"value at a = "<<a<<"\n";
    cout<<"value at *ptr = "<<*ptr<<"\n";
    ptr++;

    int *s=new int; //allocation
    *s=20;
    delete s;//free your memory

*/
    int array[4] = {10, 20, 30};
    int *ptr = array;
    cout << *ptr << endl; // 10
    ptr++;
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;
    cout << *ptr << endl; // 20

    // int a=10;
    // int *ptrNum;
    // ptrNum=&a;
    // cout<<ptrNum;
    // cout<<*ptrNum;
    // cout<<*ptr++<<endl ; //20

    // int a=5;
    // cout<<++a<<a++; //
    // cout<<a;

    void *p;
    int x = 10;
    p = &x;
    cout << "int value" << *(static_cast<int *>(p)) << endl;
    char y = 'V';
    p = &y;
    cout << "char value" << *(static_cast<char *>(p)) << endl;
    float z = 3.14;
    p = &z;
    cout << "float value" << *(static_cast<float *>(p)) << endl;

    // function pointers

    void (*funcPtr)();
    funcPtr=&print;
    funcPtr();
    return 0;
}