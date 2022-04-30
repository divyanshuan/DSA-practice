#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=5;
    cout<<&a<<endl;
    int * p=&a;
    cout<<p<<endl;
    int ** poi =& p;
    cout<<**poi<<endl;
    
    
    
    
    return 0;
}
