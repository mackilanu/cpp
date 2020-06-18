#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int fav_num;

    cout << "Enter a number between 1 - 100" << endl;
    cin >> fav_num;

    cout << "Amazing!! That is my favourite number too!\n";
    cout << "No really!! " << fav_num << " is my favourite number!\n";

    return 0;
}