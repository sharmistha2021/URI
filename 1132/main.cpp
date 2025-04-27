#include <iostream>

using namespace std;

int main()
{
    int x, y, sum = 0;
    cin >> x >> y;
    if(x < y)
    {
        for(; x <= y; x++)
        {
            if(x%13 != 0)
                sum += x;
        }
        cout << sum << endl;
    }
    else
    {
        for(; y <= x; y++)
        {
            if(y%13 != 0)
                sum += y;
        }
        cout << sum << endl;
    }
    return 0;
}
