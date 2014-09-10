#ifndef ___320_Programming_Assignment__NotAnInteger__
#define ___320_Programming_Assignment__NotAnInteger__

#include <iostream>
using namespace std;

class NotAnInteger {
public:
    NotAnInteger(const string &msg):err(msg) {}
    string errMessage() const {return err;}
private:
    string err;
};

#endif
