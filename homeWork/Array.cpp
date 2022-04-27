//
// Created by BYDEIKA on 27.04.2022.
//

#include <iostream>
#include "Array.h"
using namespace std;

/**
 * Конструктор создания массива
 *
 * @param size размер массива
 */
Array::Array(int size) : size(size) {
    this->size = size;

    arr = new int[size];
}

/**
 * Конструктор копирования
 *
 * @param array массив-копия
 */
Array::Array(Array &array) {
    this->arr = array.arr;
}

/**
 * Заполнение массива с консоли
 *
 */
void Array::fillArray() {
    cout << "Пожалуйста заполните массив: " << endl;

    for (int i = 0; i < size; ++i) {
        cin >> *(arr + i);
    }
}

/**
 * Вывод массива
 *
 */
void Array::print() {
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

/**
 * Деструктор
 *
 */
Array::~Array() {
    delete[] arr;
}

/**
 * Сортировка по возрастанию
 *
 */
void Array::sortArray() {
    int temp;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

/**
 * Поиск максимального элемента в массиве
 *
 * @return max элемент
 */
int Array::findMaxInArray() {
    int max = arr[0];
    for (int i = 0; i < size; ++i) {
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

/**
 * Поиск минимального элемента в массиве
 *
 * @return min элемент
 */
int Array::findMinInArray() {
    int min = arr[0];
    for (int i = 0; i < size; ++i) {
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

/**
 * Изменение размера массива
 *
 * @param n новый размер массива
 */
void Array::changeSize(int n) {
    this->size = n;
}





