#include <iostream>

using namespace std;

int main()
{
    int n, i, arr[20], count = 0;
    cin >> n;
    for(i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for(i = 0; i < 5; i++)
    {
        if(arr[i] == n)
            count++;
    }
    cout << count << endl;
    return 0;
}
