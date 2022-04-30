#include <iostream>
using namespace std;
void sumFinder(int *ary, int arylen,int sum)
{
    for (int i = 0; i < arylen - 1; i++)
    {
        for (int j = i + 1; j < arylen; j++)
        {
            if (ary[j] + ary[i]==sum)
            {
                cout << " elements found " << endl;
                cout<<ary[i]<<" at index : "<<i<<endl;
                cout<<ary[j]<<" at index : "<<j<<endl;
            }
        }
    }
};
int main(int argc, char const *argv[])
{
    int ary[5] = {2, 11, 7, 15, 13};
    int sum = 9;
    int arylen = (sizeof(ary) / sizeof(ary[1]));
    sumFinder(ary, arylen,sum);
    return 0;
}
