#include <iostream>
#include <memory>

using namespace std;

int main()
{
    shared_ptr<int> sp=make_shared<int>(42);

    weak_ptr<int> wp=sp;

    cout<<"Shared count :"<<wp.use_count()<<endl;

    if(auto temp=wp.lock()){ //converting weak_ptr to shared ptr
        cout<<" Value"<<*temp<<endl;
    }
    else{
        cout<<" Resouce is no longer availble"<<endl;
    }

    sp.reset();
    if(wp.expired()){
        cout<<"Weak_ptr is now expired"<<endl;
    }

    return 0;
}