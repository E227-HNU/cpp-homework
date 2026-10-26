#include <iostream>
using namespace std;

int main()
{
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
    char ch = 0;

    cin >> ch >> x1 >> ch >> y1 >> ch >> ch >> ch
        >> x2 >> ch >> y2 >> ch >> ch >> ch
        >> x3 >> ch >> y3 >> ch;

    cout << "[" << x1 << "," << y1 << "]" << endl;
    cout << "[" << x2 << "," << y2 << "]" << endl;
    cout << "[" << x3 << "," << y3 << "]" << endl;
    return 0;
}
