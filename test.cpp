#include <iostream>
using namespace std;
typedef struct student{
    string name;
    int age;
    int id;
}student;
int main(void)
{
    student student1,student2;
    string name;
    int age;
    cout << "name1" <<endl;
    cin >> name ;    
    student1.name=name;


    cout << "age1" <<endl;
    // cin >>age;
    student1.age=88;
    // cout << "age2" <<endl;
    // cin >>student2.age>>endl;
    cout << "student1 " <<student1.name<<" "<<student1.age<<endl;
    // cout << "student2" <<student2.name<<" "<<student2.age<<endl;

    int arr[]={4,23,455,144};
    int *p;
    p=arr;
    cout << p << endl;

    cout << *++p << endl;
    return 0;
}