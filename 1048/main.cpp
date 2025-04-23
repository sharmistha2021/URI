#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float salary, incr, ns, n;
    cin >> salary;
    if(salary <= 400.00)
        incr = 15;
    else if(salary <= 800.00)
        incr = 12;
    else if(salary <= 1200.00)
        incr = 10;
    else if(salary <= 2000.00)
        incr = 7;
    else if(salary > 2000.00)
        incr = 4;
    n = (incr * 0.01 * salary);
    ns = salary + n;
    cout << fixed << setprecision(2) << "Novo salario: " << ns << "\n" << "Reajuste ganho: " << n << "\n" << "Em percentual: " << int(incr) << " %" << endl;
    return 0;
}
