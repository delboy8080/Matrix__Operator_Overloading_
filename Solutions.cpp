//
// Created by floodd on 05/03/2024.
//
#include "Solutions.h"
void question1()
{
    cout << "Using the default Matrix." << endl;
    Matrix m ;
    cout << m;

    cout << "Using the non-default Matrix." << endl;
    Matrix m1(1,2,3,4) ;
    cout << m1;

}

void question2()
{
    Matrix m(2,3,4,5) ;
    Matrix m1(1,2,3,4) ;

    Matrix result = m + m1;
    cout << m << " + " <<endl << m1 << " = " << endl << result;

}

void question3()
{
    Matrix m(2,3,4,5) ;
    Matrix m1(1,2,3,4) ;

    Matrix result = m * m1;
    cout << m << " * " <<endl << m1 << " = " << endl << result;
}

void question4()
{
    cout << "Display using the default Matrix." << endl;
    Matrix m ;
    cout << m;

    cout << "Display using the non-default Matrix." << endl;
    Matrix m1(1,2,3,4) ;
    cout << m1;

}

void question5()
{
    Matrix m;
    cin >> m;
    cout << "displaying the matrix" <<endl;
    cout << m ;
}