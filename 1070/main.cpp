#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    for( int i = 0; i < 12 ; i++)
    {
        if(x%2 != 0)
            cout << x << endl;
            x++;
    }

    return 0;
}
