#include <iostream>
using namespace std;
void exchangeEle(int *element1, int *element2) // this functtion will swap elements
{
    int temp = *element1;
    *element1 = *element2;
    *element2 = temp;
};
void display(int *ary, int arylen) // function to print arry
{
    for (int i = 0; i < arylen; i++) /* if i want to find length of arry by pointer what should i do*/
    {
        cout << ary[i] << "  ";
    }
    cout << endl;
};

void arrangeArry(int *ary, int arylen)
{
    int low = 0;
    int mid = 0;
    int high = arylen - 1;
    while (low <= high)
    {

        if (ary[mid] == 0) // 0 will be exchanded on low end side
        {
            exchangeEle(&ary[low], &ary[mid]);
            mid++;
        }
        if (ary[mid] == 1)
        {
            mid++;
        }
        if (ary[mid] == 2)
        {
            exchangeEle(&ary[mid], &ary[high]); // 1 will be stored on high end side
            high--;
        }
        else
        {
            break;
        }
    };
};

int main(int argc, char const *argv[])
{
    int ary[7] = {0, 2, 1, 0, 0, 1, 2};
    int arylen = (sizeof(ary) / sizeof(ary[1]));
    arrangeArry(ary, arylen);
    display(ary, arylen);
    return 0;
}
