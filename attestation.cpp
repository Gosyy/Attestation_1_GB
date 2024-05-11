// Написать программу на C++, которая из имеющегося массива строк формирует новый массив из строк, 
// длина которых меньше, либо равна 3 символам. Первоначальный массив можно ввести с клавиатуры, 
// либо задать на старте выполнения алгоритма. При решении не рекомендуется пользоваться коллекциями, 
// лучше обойтись исключительно массивами. Использовать объектно ориентированный подход.

#include <iostream>
#include <cstring>
using namespace std;

class StringArray 
{
    private:
        string* strings;
        int size;

    public:
        StringArray() : strings(nullptr), size(0) // Конструктор, объявление "нулевых" значений
            {}

        // Ввод массива строк с клавиатуры
        void inputArrayFromKeyboard() 
        {
            cout << "Enter the number of strings: ";
            cin >> size;

            strings = new string[size];

            cout << "Enter " << size << " strings:" << endl;
            for (int i = 0; i < size; ++i) 
            {
                cin >> strings[i];
            }
        }

        // Ввод массива строк напрямую
        void inputArray(const string* arr, int arrSize) 
        {
            size = arrSize;
            strings = new string[size];
            for (int i = 0; i < size; ++i) 
            {
                strings[i] = arr[i];
            }
        }

        // Добавить строки в массив
        void addString(const string& str) 
        {
        string* newStrings = new string[size + 1];
        for (int i = 0; i < size; ++i) 
        {
            newStrings[i] = strings[i];
        }
        newStrings[size] = str;
        delete[] strings;
        strings = newStrings;
        ++size;
    }

        // Выборка строк длины <= 3
        StringArray filterShortStrings() const 
        {
            StringArray filteredArray;
            for (int i = 0; i < size; ++i) 
            {
                if (strings[i].length() <= 3) 
                {
                    filteredArray.addString(strings[i]);
                }
            }
            return filteredArray;
        }

        // Вывести массив на экран
        void display() const 
        {
            for (int i = 0; i < size; ++i) 
            {
                cout << strings[i] << ", ";
            }
            cout << endl;
        }

        ~StringArray() { delete[] strings; } // Деструктор
};

int main() 
{

    return 0;
}