#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person{
    public:
        Person(int inage, string inname, string innational):age(inage),name(inname),nationality(innational){} 
        int age;
        string name;
        string nationality;
        
    

};


#endif



