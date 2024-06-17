#include<iostream>
using namespace std;

class class_name {
    private:
    int z = 100;

    protected:
    int a = 10;
    int b = a*10;

    public:       //  access specifier
    int x = 20;
    int y = 30;

    void getData(){  // friend function
        int data = z;
        cout<<"private data = "<<z<<endl;
    }

};

int main()
{
    class_name object_name;
    cout<<object_name.x + object_name.y<<endl; // 50
    // cout<<object_name.z; // got error
    object_name.getData();

    
    return 0;
}