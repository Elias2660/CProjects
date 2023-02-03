/*
example of a header file

this will take two of the legs of a right triangle
*/

#include "string"

class RightTriangle
{
    private:
        int side1;
        int side2;
        float hypotenouse;
    public:
        RightTriangle(int side1, int side2);
        RightTriangle(); //constructor
        ~RightTriangle(); //destructor
        int getSide(int side_number);
        float getHypo();

    
};