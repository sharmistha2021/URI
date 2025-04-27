#include <iostream>

using namespace std;

int main()
{
    int n, sq;
    while(true)
    {
        cin >> n;
        if(n == 0)
            break;
        else
            sq = (n * (n + 1) * ((2 * n) + 1)) / 6;
        cout << sq << endl;
    }
    return 0;
}
