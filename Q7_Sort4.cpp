#include <iostream>
using namespace std;

int main()
{
    int a[4] = {0};
    for (int i = 0; i < 4; ++i)
        cin >> a[i];

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3 - i; ++j)
            if (a[j] < a[j + 1])
                swap(a[j], a[j + 1]);

    for (int i = 0; i < 4; ++i)
    {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}
