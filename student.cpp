#include<iostream>
#include<cstring>
using namespace std;

class student {
    public:           //  access specifier
    string name;     
    int roll;
    int age;

};

int main()
{
    student s1,s2,s3;
    s1.name = "Suraj";
    s1.roll = 05;
    s1.age = 20;

    s2.name = "Abhishek";
    s2.roll = 27;
    s2.age = 20;

    cout<<s1.name<<endl<<s1.age<<s1.roll<<endl;
     cout<<s2.name<<endl<<s2.age<<s2.roll<<endl;
   

    return 0;
}