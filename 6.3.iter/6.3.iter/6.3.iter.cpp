#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

template <typename T> 
void Create(T* c, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

template <typename T> 
void Print(T* c, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(4) << c[i];
    cout << endl;
}


template <typename T> 
T Min(T* c, const int size) {
    T min = c[0];
    for (int i = 1; i < size; i++)
        if (c[i] < min) min = c[i];
    return min;
}



int main() {
    srand((unsigned)time(NULL));  
    const int n = 12;
    int c[n];

    int Low = 15;
    int High = 85;

    Create<int>(c, n, Low, High);
   
    Print<int>(c, n);
    
    cout << "Minimum = " << Min<int>(c, n) << endl;
    
    return 0;
}