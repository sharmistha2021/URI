#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;
    int sum = a;
    while( n <= 0)
        cin >> n;

    for (int i = 1; i < n; i++)
    {
        a++;
        sum += a;
    }
    cout << sum << endl;
    return 0;
}
