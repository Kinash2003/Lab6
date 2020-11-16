#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void Create(int* c, const int size, const int Low, const int High, int i) {
    if (i == size) {
        return;
    }
    c[i] = Low + rand() % (High - Low + 1);
    Create(c, size, Low, High, i + 1);
}

void Print(int* c, const int size, int i) {
    if (i == size) {
        cout << endl;
        return;
    }
    cout << setw(4) << c[i];
    Print(c, size, i + 1);
}


double Mid(int* c, const int size, int i) {
    if (i == size)  return 0;
    double S = Mid(c, size, i + 1);
    if (i % 2 == 0) S += c[i];
    if (i == 0)  return S / ((size + 1) / 2);
    return S;
}

int main() {
    srand((unsigned)time(NULL)); 
    const int n = 11;
    int c[n];

    int Low = 15;
    int High = 85;

    Create(c, n, Low, High, 0);
    Print(c, n, 0);
    cout << "Mid = " << Mid(c, n, 0) << endl;

    return 0;
}