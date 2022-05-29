#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "Hello C++" << endl;
    cerr << "Error message: Something went wrong" << endl;
    clog << "Log message: Something happened" << endl;

    int age;
    string name;
    cout << "Input your name and age separated by space in the exact order name age" << endl;
    cin >> name >> age;
    cout << "Name is: " << name << " and age is: " << age << endl;

    string full_name;
    cout << "Enter your age" << endl;
    cin >> age;
    cin.ignore();                                           // refer here for cin.ignore: https://stackoverflow.com/questions/21567291/why-does-stdgetline-skip-input-after-a-formatted-extraction
    cout << "Enter your full name" << endl;
    getline(std::cin, full_name);
    cout << "Your full name is: " << full_name << endl;
    cout << "Your age is: " << age << endl;

    return 0;
}