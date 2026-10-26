#include <iostream>
#include <algorithm>
using namespace std;

struct Person
{
    int y, m, d;
    char name;
};

bool olderThan(const Person &a, const Person &b)
{
    if (a.y != b.y) return a.y < b.y;
    if (a.m != b.m) return a.m < b.m;
    return a.d < b.d;
}

int main()
{
    Person p[3] = {};
    for (int i = 0; i < 3; ++i)
    {
        cin >> p[i].y >> p[i].m >> p[i].d;
        p[i].name = char('A' + i);
    }

    stable_sort(p, p + 3, olderThan);

    for (int i = 0; i < 3; ++i)
        cout << p[i].name;
    cout << endl;
    return 0;
}
