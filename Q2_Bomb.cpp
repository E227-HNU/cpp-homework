#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;

    double x = 200.0 * t;
    double y = 3000.0 - 0.5 * 9.8 * t * t;

    cout << fixed << setprecision(1) << x << "," << y << endl;
    return 0;
}
