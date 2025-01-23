#include <iostream>
#include <memory>

using namespace std;

int main()
{
    shared_ptr<int> ptr1=make_shared<int>(42);

    cout<<"Value"<<*ptr1<<endl;
    cout<<"Refrence count :"<<ptr1.use_count()<<endl;

    shared_ptr<int> ptr2=ptr1;
    cout<<"Refrence count after sharing"<<ptr1.use_count()<<endl;
    

    //reset 
    ptr1.reset();
    cout<<"Refrece count after ptr 1 is reset:"<<ptr2.use_count()<<endl;

    cout<<*ptr1;

    return 0;
}