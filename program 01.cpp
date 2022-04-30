/*program to reverse the arry */

#include <iostream>
using namespace std;

void display(int *ary, int arylen) // function to print arry
{
    for (int i = 0; i < arylen; i++) /* if i want to find length of arry by pointer what should i do*/
    {
        cout << ary[i] << "  ";
    }
    cout << endl;
};

int main(int argc, char const *argv[])
{
    int ary[8] = {2, 23, 34, 52, 24, 47, 24, 78};
    int arylen = (sizeof(ary) / sizeof(ary[1])); // claculating the size of arry
    display(ary, arylen);
    for (int j = 0; j < arylen / 2; j++) // reversing the arry
    {
        int temp;
        temp = ary[j];
        ary[j] = ary[arylen - j - 1];
        ary[arylen - j - 1] = temp;
    }
    display(ary, arylen);
    return 0;
}
