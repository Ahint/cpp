#include <iostream>

using namespace std;

class Student
{
private:
    int a;
    string b;
    string c;
    int d;

public:
    void set_data(int age, string front_name, string last_name, int standard);
    void get_data();
};

void Student ::set_data(int age, string front_name, string last_name, int standard)
{
    a = age;
    b = front_name;
    c = last_name;
    d = standard;
}

void Student ::get_data()
{
    cout << a << endl;
    cout << c << ", " << b << endl;
    cout << d << endl<<endl;
    
    cout<<a<<","<<b<<","<<c<<","<<d<<endl;
}

int main()
{
    int age;
    string front_name;
    string last_name;
    int standard;

    Student johnny;

    cin >> age;
    cin >> front_name;
    cin >> last_name;
    cin >> standard;

    johnny.set_data(age,front_name,last_name,standard);
    johnny.get_data();

    return 0;
}
