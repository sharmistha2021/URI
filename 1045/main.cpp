#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double arr[10], a, b;
    int i;
    for(i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 3, greater<int>());
    a = (arr[1] * arr[1]) + (arr[2] * arr[2]);
    b = (arr[0] * arr[0]);

    if(arr[0] >= (arr[1] + arr[2]))
        cout << "NAO FORMA TRIANGULO" << endl;
    else
    {
        if( b == a)
            cout << "TRIANGULO RETANGULO" << endl;
        else
        {
            if(b > a)
                cout << "TRIANGULO OBTUSANGULO" << endl;
            if(b < a)
                cout << "TRIANGULO ACUTANGULO" << endl;
            if(arr[0] == arr[1] && arr[0] == arr[2])
                cout << "TRIANGULO EQUILATERO" << endl;
            else if(arr[1] == arr[2] || arr[0] == arr[1] || arr[0] == arr[2])
                cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}
