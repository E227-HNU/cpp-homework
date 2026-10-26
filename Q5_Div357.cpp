#include <iostream>
using namespace std;

int main()
{
    long long n = 0;
    cin >> n;

    int d[3] = {3, 5, 7};
    bool first = true;

    for (int i = 0; i < 3; ++i)
    {
        if (n % d[i] == 0)
        {
            if (first)
            {
                cout << "It's divisible by " << d[i];
                first = false;
            }
            else
            {
                cout << "," << d[i];
            }
        }
    }

    if (first)
        cout << "null";

    cout << endl;
    return 0;
}
