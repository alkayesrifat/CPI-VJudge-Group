#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    cin >> x;

    int n = 25 - x;

    int cnt = 0;

    while (n > 0)
    {
        cnt++;
        n = n - 4;
    }

    cout << cnt;

    return 0;
}