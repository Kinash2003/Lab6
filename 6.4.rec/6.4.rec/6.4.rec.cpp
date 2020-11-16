#include <iostream>
#include <iomanip>

#define TESTING

using namespace std;

void create(int* arr, int SIZE, int MIN, int MAX, int i)
{
    if (i < SIZE)
    {
        arr[i] = MIN + rand() % (MAX - MIN + 1);
        create(arr, SIZE, MIN, MAX, ++i);
    }
}

void print(int* arr, int SIZE, int i)
{
    if (i < SIZE)
    {
        cout << arr[i] << ' ';
        print(arr, SIZE, ++i);
    }
}
void sort(int* arr, const int SIZE, int i)
{
    int min = arr[i];
    int imin = i;
    for (int j = i + 1; j < SIZE; j++)
        if (arr[i] % 2 == 0 && arr[i] != 0)
        {
            min = arr[j];
            imin = j;
        }
    arr[imin] = arr[i];
    arr[i] = min;

    if (i < SIZE - 2)
        sort(arr, SIZE, i + 1);
}
int count(int* arr, int SIZE, int nCount, int n, int i)
{
    if (i < SIZE)
    {
        if (arr[i] % 2 == 0 && arr[i] != 0)
        {
            nCount++;
        }
        count(arr, SIZE, nCount, n, ++i);
    }
    else return nCount;
}

double mult(int* arr, int SIZE, int max, int index, double mul, int i)
{
    if (i < SIZE)
    {
        if (arr[i] % 2 == 0 && arr[i] != 0)
        {
            max > abs(arr[i]);
            index = i;
        }
        mult(arr, SIZE, max, index, mul, ++i);
    }
    else {
        for (int i = index + 1; i < SIZE; i++)
        {
            mul *= arr[i];
        }
        return mul;
    }
}




#ifdef TESTING
int main()
{
    srand((unsigned)time(NULL));

    double MIN, MAX, n;
    int SIZE;

    cout << " (SIZE): "; cin >> SIZE;
    cout << " (MIN): "; cin >> MIN;
    cout << " (MAX): "; cin >> MAX;
    cout << "n = "; cin >> n;
    cout << endl;

    int* arr = new int[SIZE];

    create(arr, SIZE, MIN, MAX, 0);

    print(arr, SIZE, 0);
    cout << endl;

    cout << " " << mult(arr, SIZE, arr[0], 0, 1, 0) << endl;
    sort(arr, SIZE, 0);
    print(arr, SIZE, 0);

    delete[] arr;

    return 0;
}
#endif