#include <iostream>

using namespace std;

int main()
{

    int size = 0;

    cout << "Enter size array : ";
    cin >> size;

    int* arr = new int[size];

    for (size_t i = 0; i < size; i++)
    {
        arr[i] = i + 1;
        cout << arr[i] << "   ";
    }
    
    delete[] arr;
}
