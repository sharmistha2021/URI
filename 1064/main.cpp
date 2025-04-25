#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double arr[20], count = 0, sum = 0;
    for(int i = 0; i < 6; i++)
    {
        cin >> arr[i];
        if(arr[i] > 0)
            {count++;
            sum += arr[i];
            }
    }
    cout << count << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum / count << endl;

    return 0;
}
