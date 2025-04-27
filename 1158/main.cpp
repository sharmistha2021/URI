#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        cin >> x >> y;
        for(int j = 0; j < 2 * y; j++)
        {
            if(x % 2 != 0)
            {
                sum += x;
            }
            x++;
        }
        cout << sum << endl;
    }
    return 0;
}
