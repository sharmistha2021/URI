#include <iostream>

using namespace std;

int main()
{
    int n;
    while(true)
    {
        int sum = 0;
        cin >> n;
        if( n == 0)
            break;
        for(int i = 1; i <= 10; i++)
        {
            if(n % 2 == 0)
            {

                sum += n;
            }
            n++;
        }
        cout << sum << endl;

    }

    return 0;
}
