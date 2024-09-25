#include <iostream>
#include <cstring>
#include "Person.h"

void Person::Init(const char* name, int id, int age)
{
    strcpy(_name,name);
    _id = id;
    _age = age;
}

void Person::Print()
{
    std::cout << "name:" << _name << " id:" << _id << " age:" << _age << std::endl;
}

// class Person
// {
// private:
//     char _name[20];
//     int _id;
//     int _age;
// public:
//     void Init(const char* name, int id, int age)
//     {
//         strcpy(_name,name);
//         _id = id;
//         _age = age;
//     }

//     void Print()
//     {
//         std::cout << "name:" << _name << " id:" << _id << " age:" << _age << std::endl;
//     }
// };
