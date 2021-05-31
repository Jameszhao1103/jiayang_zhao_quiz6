#ifndef CELE_H
#define CELE_H
#include <string>
#include "person.h"

using namespace std;


class Celebrity: public Person{
    public:
        Celebrity(int inage, string inname, string innational, int inpopularity, string intalent):
            Person{inage,inname,innational}, popularity(inpopularity), talent(intalent){}
        int popularity;
        string talent;
};

#endif