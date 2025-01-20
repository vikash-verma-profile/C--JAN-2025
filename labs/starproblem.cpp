#include <iostream>

using namespace std;

int main()
{
    int rows = 5;
    for (int row = 1; row <= rows; row++)
    {
        // white spaces
        for (int spaceCounter = 0; spaceCounter < rows-row; spaceCounter++)
        {
           cout<<" ";
        }
        int coefficient=1;
        // for priniting Numbers
        for (int printNumbers  = 1; printNumbers <=row; printNumbers++)
        {
            cout<<" "<<coefficient;
            coefficient=coefficient*(row-printNumbers)/printNumbers;
        }
        cout<<endl;
        
        
    }
    
    
    return 0;
}
