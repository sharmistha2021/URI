#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    double x, y;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if(y == 0)
            cout << "divisao impossivel" << endl;
        else
            cout << fixed << setprecision(1) << x / y << endl;
    }
    return 0;
}
