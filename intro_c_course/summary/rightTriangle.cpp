/*
implememtation 
*/
#include "RightTriangle.h"
#include "cmath"
#include "iostream"

RightTriangle::RightTriangle(int side1, int side2) : side1(side1),
    side2(side2), hypotenouse(pow( (pow(side1, 2) + pow(side2, 2)) , 1 /2))
{
    //constructor
}

int RightTriangle::getSide(int side_number)
{
    if (side_number == 1)
    {
        std::cout << side1 << std::endl;
    }
    if (side_number == 2)
    {
        std::cout << side2 << std::endl;
    }
    else
    {
        std::cout << "please return 1 or 2" << std::endl;
    }
}

float RightTriangle::getHypo()
{
    return hypotenouse;
}


RightTriangle::~RightTriangle()
{
    
}
