#include <iostream>

using namespace std;

int main()
{
    int n, max, i, p;
    max = 0;
    for(i = 1; i <= 100; i++)
    {
        cin >> n;
        if(n > max)
        {
            max = n;
            p = i;
        }
    }

    cout << max << endl;
    cout << p << endl;
    return 0;
}
