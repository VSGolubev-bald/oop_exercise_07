#ifndef OOP7_HEXAGON_H
#define OOP7_HEXAGON_H

#include "figure.h"

struct trapeze : figure{
private:
    point a_,b_,c_,d_;
public:
    point center() const override ;
    void print(std::ostream&) const  override ;
    void printFile(std::ofstream&) const  override ;
    double square() const override ;
    trapeze() = default;
    trapeze(std::istream& is);
    trapeze(std::ifstream& is);
};


#endif //OOP7_HEXAGON_H
