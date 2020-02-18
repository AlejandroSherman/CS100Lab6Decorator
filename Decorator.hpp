#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__

#include "base.hpp"

class Base;

class Decorator : public Base {
    protected:
      Base* value;
    public:
    //Decorator(Base* incoming) {value = incoming ;}
    Decorator(){};
    virtual double evaluate() = 0;
    //~Decorator() {};
    virtual std::string stringify() = 0;

};
    #endif
