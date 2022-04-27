/*
Создайте класс Array (или используйте ранее созданный вами).
Класс Array – это класс динамического массива.
Размер массива может быть передан в качестве параметра или задан с помощью вызова функции-члена.
Класс должен позволять заполнять массив значениями, отображать содержимое массива, изменять
размер массива, сортировать массив, определять минимальное и максимальное значение.
Класс должен содержать набор конструкторов (конструктор копирования обязателен), деструктор.
*/

#include <iostream>
#include "Array.h"

using namespace std;
int main() {
    int size = 3;
    Array array1(size);
    array1.fillArray();
    array1.print();

    Array array2(size);
    array2.fillArray();
    array2.print();

    array2.sortArray();
    array2.print();

    cout << array1.findMinInArray() << endl;
    cout << array2.findMaxInArray() << endl;


    return 0;
}
