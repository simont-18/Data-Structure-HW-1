#ifndef ___320_Programming_Assignment__EmptyList__
#define ___320_Programming_Assignment__EmptyList__

#include <iostream>
using namespace std;

class EmptyList {
public:
    EmptyList(const string &msg):err(msg) {}
    string errMessage() const {return err;}
private:
    string err;
};

#endif
