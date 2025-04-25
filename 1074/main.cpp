#include <iostream>

using namespace std;

int main()
{
    int t, arr[10000];
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
        if(arr[i] == 0)
            cout << "NULL" << endl;
        else if(arr[i] % 2 == 0)
            cout << "EVEN ";
        else
            cout << "ODD ";
        if(arr[i] > 0)
            cout << "POSITIVE" << endl;
        else if (arr[i] < 0)
            cout << "NEGATIVE" << endl;

    }
    return 0;
}
