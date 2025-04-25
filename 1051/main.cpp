#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float salary, rate, tax;
    cin >> salary;
    if(salary <= 2000.00)
        cout << "Isento" << endl;
    else
    {
        if(salary <= 3000.00)
            tax = (salary - 2000.00) * 0.08;
        else if(salary <= 4500.00)
        {
            tax = 80.00 + (salary - 3000.00) * 0.18;
        }
        else if(salary > 4500.00)
        {
            tax = 350 + (salary - 4500.00) * 0.28;
        }

        cout << fixed << setprecision(2) <<"R$ " << tax << endl;
    }
    return 0;
}
