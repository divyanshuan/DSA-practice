/*progrm to find max and min element of the arry */
#include <iostream>
using namespace std;
void maxFinder(int *ary, int arylen)
{
    int max = ary[0];
    for (int i = 0; i < arylen; i++)
    {
        if (ary[i] >= max)
        {
            max = ary[i];
        }
    }
    cout << "the max value is  " << max << endl;
};
void minFinder(int *ary, int arylen)
{
    int min = ary[0];
    int index =0;
    for (int i=0; i < arylen; i++)
    {
        if (ary[i] <= min)
        {
            min = ary[i];
            index= i;
        }
    }
    cout << "the min value is  " << min<<"at index "<< index << endl;
};
int main(int argc, char const *argv[])
{
    int ary[7] = {23, 64, 94, 2, 34, 74, 73};
    int arylen = (sizeof(ary) / sizeof(ary[1]));
    maxFinder(ary, arylen);
    minFinder(ary, arylen);

    return 0;
}
