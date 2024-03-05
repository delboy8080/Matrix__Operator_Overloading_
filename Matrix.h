//
// Created by floodd on 05/03/2024.
//
#include <iostream>
#ifndef MATRIX__OPERATOR_OVERLOADING__MATRIX_H
#define MATRIX__OPERATOR_OVERLOADING__MATRIX_H


class Matrix {
    int tr, tl, br, bl;
public:
    Matrix(int tl = 1, int tr=1, int bl = 1, int br=1);

    Matrix operator+(const Matrix& other);
    Matrix operator*(const Matrix& other);
    friend std::ostream& operator<<(std::ostream& out, const Matrix& other);
    friend std::istream& operator>>(std::istream& in, Matrix& other);



};


#endif //MATRIX__OPERATOR_OVERLOADING__MATRIX_H
