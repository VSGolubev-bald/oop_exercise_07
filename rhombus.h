
#ifndef OOP7_OCTAGON_H
#define OOP7_OCTAGON_H


#include "figure.h"

struct rhombus : figure{
private:
    point a_,b_,c_,d_;
public:
    point center() const override ;
    void print(std::ostream&) const  override ;
    void printFile(std::ofstream&) const  override ;
    double square() const override ;
    rhombus() = default;
    rhombus(std::istream& is);
    rhombus(std::ifstream& is);
};


#endif //OOP7_OCTAGON_H
