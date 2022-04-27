//
// Created by BYDEIKA on 27.04.2022.
//

#ifndef HOMEWORK_ARRAY_H
#define HOMEWORK_ARRAY_H


class Array {

    int* arr;
    int size;
public:
    Array(int size);

    Array(Array &arr);

    void fillArray();

    void print();

    virtual ~Array();

    void sortArray();

    int findMinInArray();

    int findMaxInArray();

    void changeSize(int n);
};


#endif //HOMEWORK_ARRAY_H
