#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> ptr=make_unique<int>(42);

    cout<<"Value"<<*ptr<<endl;

    unique_ptr<int> ptr2=move(ptr);
    if(!ptr){
        cout<<"ptr is now null"<<endl;
    }

    cout<<"Valiue in ptr"<<*ptr2<<endl;

    return 0;
}