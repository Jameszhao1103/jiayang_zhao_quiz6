#ifndef SPY_H
#define SPY_H
#include <string>
#include "person.h"

using namespace std;


class Spy: private Person{
    public:
        Spy(int inage, string inname, string innational, string inalias, string inweapon): Person{inage,inname,innational}, alias(inalias),weapon(inweapon){} 
        string alias;
    private:
        
        string weapon;
};

#endif