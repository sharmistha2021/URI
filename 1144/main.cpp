#include <iostream>

using namespace std;

int main()
{
    int n, x = 1, y, z;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        y = x * x;
        z = x * y;
        cout << x << " " << y << " " << z << endl;
        cout << x << " " << y + 1 << " " << z + 1 << endl;
        x++;
    }
    return 0;
}
