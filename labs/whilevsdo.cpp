#include <iostream>

using namespace std;

int main()
{
    int counter=0;
    cout<<"WHILE ";
    while (counter>0)
    {
        cout<<counter<<"\t";
        //counter++;
    }
    cout<<"\n DO WHILE ";
    counter=0;
    do
    {
       cout<<counter;
       //counter++;
    } while (counter>10);
    cout<<"FOR Loop "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<i;
    }
    
    
    return 0;
}
