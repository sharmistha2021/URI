#include <iostream>

using namespace std;

int main()
{
    int n, p;
    cin >> n;
    for(int i = 1; i < 11; i++)
    {
        p = i * n;
        cout << i << " x " << n << " = " << p << endl;
    }
    return 0;
}
