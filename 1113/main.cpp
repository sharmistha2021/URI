#include <iostream>

using namespace std;

int main()
{
    int x, y;

    while(true)
    {
        cin >> x >> y;
        if(x == y)
            break;
        else if(x < y)
            cout << "Crescente" << endl;
        else if(x > y)
            cout << "Decrescente" << endl;
    }
    return 0;
}
