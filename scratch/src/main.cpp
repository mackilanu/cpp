#include <iostream> 
#include <vector>

using namespace std;

int main() 
{
    double num = 120;
    int num1 = 10;

    cout << num1 + static_cast<int> (num) << endl;

    return 0;
}
