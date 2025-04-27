#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int count = 0;
        cin >> n;
        for(int j = 2; j < n/2; j++)
        {
            if(n % j == 0)
            {
                count++;
                break;
            }

        }
        if(count == 0 && n != 1)
            cout << n << " eh primo" << endl;
        else
            cout << n << " nao eh primo" << endl;
    }
    return 0;
}
