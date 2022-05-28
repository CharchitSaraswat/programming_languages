#include <iostream>

using namespace std;

/*
    Eg of rumtime error: division by 0
    Code also generates a warning
*/

int main(){
    // Runtime error
    int val = 7/0;
    cout << "value: " << val << endl;
    return 0;
}