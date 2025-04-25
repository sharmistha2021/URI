#include <iostream>

using namespace std;

int main()
{
    int arr[20], even = 0, odd = 0, pos = 0, neg = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if(arr[i]%2 == 0)
            even++;
        else
            odd++;
        if(arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
    }
    cout << even << " valor(es) par(es)" << "\n" << odd << " valor(es) impar(es)" << "\n" << pos << " valor(es) positivo(s)" << "\n" << neg << " valor(es) negativo(s)" << endl;
    return 0;
}
