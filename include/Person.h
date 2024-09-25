#ifndef PERSON_H_
#define PERSON_H_
class Person
{
private:
    char _name[20];
    int _id;
    int _age;
    /* data */
public:
    void Init(const char* name, int id, int age);
    void Print();

};


#endif