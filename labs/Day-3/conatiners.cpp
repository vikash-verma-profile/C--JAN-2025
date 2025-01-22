#include <iostream>
#include <array>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int,6> ar={1,2,3,4,5,6};
    vector<int> v={1,2,3,4};

    vector<int>::iterator i;

    // for (int i = 0; i < v.size(); i++)
    // {
    //    cout<<v[i]<<endl;
    // }

     for (i = v.begin(); i < v.end(); i++)
    {
        //if(i==v.begin()){
            // i=v.insert(i,5);
        //}

        if(i==v.begin()+1){
            i=v.erase(i);
        }
       cout<<*i<<endl;
    }
    v.push_back(4);
    


//     for (int i = 0; i < 6; i++)
//     {
//         cout<<ar.at(i)<<endl;
//     }

//     int &a=ar.front();
//     cout<<a;
    
//  int &b=ar.back();
//     cout<<b;
    return 0;
}