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
        
        ~StringArray() { delete[] strings; } // Деструктор
};

int main() 
{

    return 0;
}