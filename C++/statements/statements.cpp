#include <iostream>

using namespace std;

int add_numbers(int a, int b) {
    return a + b;
}

int mult_ints(int a, int b) {
    return a * b;
}

int main(int argc, char **argv){
    int a = 21;
    int b = 9;

    int sum = add_numbers(a, b);
    cout << "The sum of two numbers is: " << sum << endl;

    int mult = mult_ints(a, b);
    cout << "The multiplication of two numbers is: " << mult << endl;
    return sum;
}