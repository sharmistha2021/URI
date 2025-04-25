#include <iostream>

using namespace std;

int main()
{
    int t, arr[100000], in = 0, out = 0;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
        if(arr[i] > 9 && arr[i] < 21)
            in++;
        else
            out++;
    }
    cout << in << " in" << "\n" << out << " out" << endl;

    return 0;
}
