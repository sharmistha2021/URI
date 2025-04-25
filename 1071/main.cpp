#include <iostream>

using namespace std;

int main()
{
    int x, y, sum = 0;
    cin >> x >> y;
    if(x < y)
    {
        for( x = x+ 1; x < y; x++)
        {
            if(x % 2 != 0)
                sum += x;
        }
        cout << sum << endl;
    }
    else if(x > y)
    {
        for( y = y + 1; y < x; y++)
        {
            if(y % 2 != 0)
                sum += y;
        }
        cout << sum << endl;
    }
    else
        cout << "0" << endl;

    return 0;
}
