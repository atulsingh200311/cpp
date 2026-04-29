#include <iostream>

using namespace std;
int main(){
    int age;
    float height;
    char name;  

    cout << "Please enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;

    cout << "Please enter your height: ";
    cin >> height;
    cout << "You are " << height << " inches tall." << endl;

    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;


    int d, f;
    float g=0.0, j=1.3;
    cin >> d >> f >> g >> j;
    cout << "value of d is " << d << endl;
    cout << "value of f is " << f << endl;
    cout << "value of g is " << g << endl;
    cout << "value of j is " << j << endl;


    return 0;
}