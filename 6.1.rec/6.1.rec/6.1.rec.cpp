#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>
#include <Windows.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;

}
int Sum(int* a, const int size, int i)
{
    if (i < size)
    {
        if (a[i] % 2 && (a[i] % 13))
            return a[i] + Sum(a, size, i + 1);
        else
            return Sum(a, size, i + 1);
    }
    else
        return 0;
}
void Null(int* a, const int size, int i)
{
    if (a[i] % 2 && (a[i] % 13))
        a[i] = 0;
    if (i < size - 1)
        Null(a, size, i + 1);
}


int main()
{
    srand((unsigned)time(NULL));
    srand((unsigned)time(NULL));
    const int size = 21;
    int a[size];
    int Low = 15;
    int High = 85;
    cout << " arr[]: " << endl;
    Create(a, size, Low, High, 0);
    Print(a, size, 0);
    Sum(a, size, 0);
    cout << "arr[]:" << Sum(a, size, 0) << "";
    cout << endl;
    Null(a, size, 0);
    Print(a, size, 0);
    return 0;

}
