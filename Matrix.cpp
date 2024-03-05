//
// Created by floodd on 05/03/2024.
//

#include "Matrix.h"
Matrix::Matrix(int tl, int tr, int bl , int br)
{
    this->tl = tl;
    this->tr = tr;
    this->bl = bl;
    this->br = br;
}

Matrix Matrix::operator+(const Matrix& other)
{
    int ntl = tl + other.tl;
    int ntr = tr + other.tr;
    int nbl = bl + other.bl;
    int nbr = br + other.br;

    return Matrix(ntl, ntr, nbl, nbr);
}
Matrix Matrix::operator*(const Matrix& other)
{
    int ntl = (tl * other.tl)+(tr * other.bl);
    int ntr = (tl * other.tr)+(tr * other.br) ;
    int nbl = (bl * other.tl)+(br * other.bl);
    int nbr = (bl * other.tr)+(br * other.br);

    return Matrix(ntl, ntr, nbl, nbr);
}
std::ostream& operator<<(std::ostream& out, const Matrix& other)
{
    out << other.tl << " " << other.tr <<std::endl;
    out << other.bl << " " << other.br <<std::endl;
    return out;
}

std::istream& operator>>(std::istream& in, Matrix& other)
{
   // in >> other.tl >> other.tr >> other.bl >> other.br ;

    std::cout << "top left: " <<std::endl;
    in >> other.tl;

    std::cout << "top right" <<std::endl;
    in >> other.tr;

    std::cout << "bottom left" <<std::endl;
    in >> other.bl;

    std::cout << "bottom right" <<std::endl;
    in >> other.br;
    return in;
}

