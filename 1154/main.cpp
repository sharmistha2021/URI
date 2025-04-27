#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n, sum = 0.00, count = 0.00;
    while(true)
    {
        cin >> n;
        if(n < 0)
            break;
        sum += n;
        count++;
    }
    cout << fixed << setprecision(2) << sum / count << endl;

    return 0;
}
