#ifndef ___320_Programming_Assignment__NonExistence__
#define ___320_Programming_Assignment__NonExistence__

#include <iostream>
using namespace std;

class NonExistence {
public:
    NonExistence(const string &msg):err(msg) {}
    string errMessage() const {return err;}
private:
    string err;
};

#endif