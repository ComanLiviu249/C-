#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    int a = 4;
    int b = 5;
    ostringstream oss;
    oss << a << b;
    istringstream iss(oss.str());
    int c;
    iss >> c;
    cout << c << endl;
}
