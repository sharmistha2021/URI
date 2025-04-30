#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 0)
        cout << "E" << endl;
    if(n > 0 && n < 36)
        cout << "D" << endl;
    if(n > 35 && n < 61)
        cout << "C" << endl;
    if(n >60 && n < 86)
        cout << "B" << endl;
    if(n > 85 && n < 101)
        cout << "A" << endl;
    return 0;
}
