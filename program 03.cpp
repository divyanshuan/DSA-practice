#include <iostream>
using namespace std;
void exchangeEle(int *element1, int *element2) // this functtion will swap elements 
{
    int temp = *element1;
    *element1 = *element2;
    *element2 = temp;
};
void formatAry(int *arr, int arylen)
{
    int low = 0;
    int mid = 0;
    int high = arylen - 1;
    while (mid <= high)
    {
        switch (arr[mid] > 0) /// if positive that eill lead to case 1 if negative then case 0
        {
        case 0:           // mid and low pointer wil increase by one and negative value left behind 
            low++;
            mid++;
            break;
        case 1:
            exchangeEle(&arr[mid], &arr[high]); //positive number will shift to the right
            high--;
            break;
        }
    }
};

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
    int ary[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int arylen = sizeof(ary) / ary[0];
    cout << (-12 > 11) << endl;
    formatAry(ary, 9);
    display(ary, 9);

    return 0;
}
