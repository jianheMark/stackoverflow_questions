#include <iostream>
#include "Foo.h"
/*
 * The compiler is allowed to make one implicit conversion to resolve the parameters to a function.
 * What this means is that
 * the compiler can use constructors callable with a single parameter to convert from one type to another
 * in order to get the right type for a parameter.
 */
//class Foo{
//private:
//    int m_foo;
//public:
//    explicit  Foo(int foo):m_foo(foo){
//    }
//
//    int getFoo(){return m_foo;}
//};

//function takes a Foo object.

void DoBar(Foo foo){
    int i = foo.getFoo();
    std::cout<<i;
}

int main() {
    DoBar(Foo(11));
}

