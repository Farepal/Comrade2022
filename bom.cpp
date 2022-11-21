#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    int y,x;
    cin >> n >> m >> y >> x;
    int has[4];
    has[0] = y + x - 2;
    has[1] = m - x + 1 + y - 2;
    has[2] = n - y + 1 + x - 2;
    has[3] = n - y + 1 + m - x + 1 - 2;
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        if (has[i] > ans)
            ans = has[i];
    }
    cout << ans << endl;
    return 0;
}