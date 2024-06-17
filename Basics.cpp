#include<iostream>
using namespace std;

class class_name {
    public:       //  access specifier
    int x = 20;
    int y = 30;

};

int main()
{
    class_name object_name;
    cout<<object_name.x + object_name.y<<endl; // 50

    return 0;
}