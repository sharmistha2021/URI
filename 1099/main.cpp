#include <iostream>

using namespace std;

int main()
{
    int t, x, y, min, max;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int sum = 0;
        cin >> x >> y;
        if(x < y)
        {
            min = x + 1;
            max = y;
        }
        else
        {
            min = y + 1;
            max = x;
        }
        for(; min < max; min ++)
        {
            if(min % 2 != 0)
                sum += min;
        }
        cout << sum << endl;
    }
    return 0;
}
