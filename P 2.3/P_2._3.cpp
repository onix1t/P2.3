#include <iostream>

using namespace std;

void ex1()
{
    cout << "\r\nЗадание 1\r\n";
    
    char array[] {'H', 'Д', 'e', 'l', '6','l', 'o', '!'};
    char *ptr = array;
    int size = sizeof(array) / sizeof(array[0]);
    
    for (int i{}; i < size; i++)
    {
        if (isalpha (*(ptr + i)))
        {
            cout << "Значение "<< i << ": " << *(ptr + i) << endl;
        }
    }
}

void bubbleSort(double *arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                double temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void ex2()
{
    cout << "\r\nЗадание 2\r\n";
    
    double arr[] {1.6, 1.2, 8.2, 6.3, 2.5, 9.3};
    double *ptr1 = arr;
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(ptr1 , n);
    
    for (int i{}; i < n; i++)
    {
        cout << "Значение "<< i << ": " << *(ptr1 + i) << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Практика 3 | Вариант 7\r\n";

    //  Задание 1
    ex1();

    //  Задание 2
    ex2();
}